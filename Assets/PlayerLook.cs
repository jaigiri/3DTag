using UnityEngine;

public class PlayerLook : MonoBehaviour
{
    public float mouseS = 100f;
    public Transform playerBody;

    public float xRot = 0f;
    public float mX = 0f;
    public float mY = 0f;

    private void Start()
    {
        Cursor.lockState = CursorLockMode.Locked;
    }

    private void Update()
    {
        mX = Input.GetAxis("Mouse X") * mouseS * Time.deltaTime;
        mY = Input.GetAxis("Mouse Y") * mouseS * Time.deltaTime;

        xRot -= mY;
        xRot = Mathf.Clamp(xRot, -90f, 90f);

        transform.localRotation = Quaternion.Euler(xRot, 0f, 0f);
        playerBody.Rotate(playerBody.up * mX);
    }
}
