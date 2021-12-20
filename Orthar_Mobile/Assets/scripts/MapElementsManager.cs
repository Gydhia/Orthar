using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapElementsManager : Singleton<MapElementsManager>
{
    [SerializeField] private GameObject mapElementPrefab;
    [SerializeField] private Sprite testSprite;
    [SerializeField] private Vector2 testVector = new Vector2(0,0);
    private void Start()
    {
        MapElement element = new MapElement(testSprite, testVector);
        SpawnNewMapElement(element);
    }

    public void SetAllMapElements()
    {
        List<MapElement> mapElements = GetElementsFromUnreal.ReturnElementListFromUnreal();

        for (int i = 0; i < mapElements.Count - 1; i++)
        {
            SpawnNewMapElement(mapElements[i]);
        }
    }

   private void SpawnNewMapElement(MapElement mapElement)
    {
        GameObject go = Instantiate(mapElementPrefab);
        Sprite goSprite = go.GetComponent<Sprite>();

        //Sera sûrement amené à bouger avec le système de grid
        go.transform.position = mapElement.ElementPosition;

        goSprite = mapElement.ElementSprite;
    }

}
