#!/usr/bin/python3
"""
    Lockboxes Unlocking Module
"""


def canUnlockAll(boxes: list):
    """
        Determine if all boxes can be opened.

        Args:
            boxes (list): List of lists, the boxes to unlock.

        Returns:
            boolean: Return True if all boxes can be opened,
                    else return False.
    """
    opened_boxes = [0]

    # Je récupère la prochaine boite dévérouillée
    for box in opened_boxes:
        # Pour chaque box, je parcours toutes les clés
        for key in boxes[box]:

            # Je n'ouvre pas la box déjà associé à la clé
            if key not in opened_boxes and key < len(boxes):

                # J'ouvre la boxe
                opened_boxes.append(key)

    return len(boxes) == len(opened_boxes)
