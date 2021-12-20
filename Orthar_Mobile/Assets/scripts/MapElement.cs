using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapElement
{
    public Sprite ElementSprite => elementSprite;
    public Vector2 ElementPosition => elementPosition;

    [SerializeField] private Sprite elementSprite;
    private Vector2 elementPosition;

    public MapElement(Sprite elementSprite, Vector2 elementPosition)
    {
        this.elementSprite = elementSprite;
        this.elementPosition = elementPosition;
    }
}
