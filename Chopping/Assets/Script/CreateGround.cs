using UnityEngine;
using System.Collections;

public class CreateGround : MonoBehaviour {

	public GameObject ground;

	// Use this for initialization
	void Start () {

		Debug.Log (Screen.width);
		Debug.Log (Screen.height);
		Debug.Log (Screen.orientation);

		float x = -2f;
		float y = 3.5f;
		float z = 0;

		int myInt = 0;
		
		while (myInt < 5)
		{
			Instantiate(this.ground, new Vector3(x, y, z), Quaternion.identity);
			x = x + 5;
			myInt++;
		}

	
	
	}
	
	// Update is called once per frame
	void Update () {


		//float x = Random.Range(-2.0f, 2.0f);
		//float y = Random.Range(-2.0f, 2.0f);
		//float z = Random.Range(-2.0f, 2.0f);
		
		//Instantiate(this.ground, new Vector3(x, y, z), Quaternion.identity);

	}
}
