using System;
using UnityEngine;
using UnityEngine.Networking;

public class PlayerConnectionObject : NetworkBehaviour
{
    public GameObject playerCharacterTemp;
    private GameObject playerCharacter;
    private CharacterController controller;

    private void Start()
    {
        if (!isLocalPlayer) return;

        CmdGeneratePlayerCharacter();
    }
    
    private void Update()
    {
        if (playerCharacter == null || controller == null) return;
        
        var x = Input.GetAxis("Horizontal");
        var z = Input.GetAxis("Vertical");
        var y = 0;
        if (!controller.isGrounded)
        {
            y = -2;
        }

        var movement = playerCharacter.transform.right * x + playerCharacter.transform.forward * z;
        movement.y = y;

        CmdMovePlayerCharacter(movement);

        //Debug.Log(playerCharacter.transform.Find("Camera").gameObject.transform);
    }
    
    /*
     * Network functions below
     * "CmdGeneratePlayerCharacter()" tells other clients about you (your character).
     * "CmdMovePlayerCharacter()" tells other clients when your (your character) location updates.
     */

    [Command]
    private void CmdGeneratePlayerCharacter()
    {
        var obj = Instantiate(playerCharacterTemp);
        playerCharacter = obj;
        controller = playerCharacter.GetComponent<CharacterController>();
        playerCharacter.transform.position = new Vector3(0, 5, 0);
        NetworkServer.Spawn(obj);
    }

    [Command]
    private void CmdMovePlayerCharacter(Vector3 movement)
    {
        controller.Move(movement * (Input.GetKey(KeyCode.LeftControl) ? 20 : 15) * Time.deltaTime);
    }

    [Command]
    private void CmdRotatePlayerCharacter(Vector3 rot)
    {
        
    }
}