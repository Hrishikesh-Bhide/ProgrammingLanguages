def room(room_number, gold_door_index):
    for i in range(1, 4):
        if i == gold_door_index:
            yield f"Door {room_number}-{i}: Gold!"
        else:
            yield f"Door {room_number}-{i}: Empty"

def main():
    r1 = room(1, None)
    r2 = room(2, 2)
    r3 = room(3, None)

    rooms = {
        '1': r1,
        '2': r2,
        '3': r3,
    }

    doors_opened = 0
    max_doors = 5
    found_gold = False

    print("You have 5 attempts to open doors across 3 rooms.")
    print("Choose which room's door to open by typing 1, 2, or 3.")

    while doors_opened < max_doors and not found_gold:
        choice = input(f"\nOpen door from room (1, 2, or 3) [Attempt {doors_opened + 1}/{max_doors}]: ")
        if choice not in rooms:
            print("Invalid choice. Try again.")
            continue

        try:
            result = next(rooms[choice])
        except StopIteration:
            print(f"No more doors to open in room {choice}. Try a different room.")
            continue

        print(f"You opened {result}")
        doors_opened += 1

        if "Gold" in result:
            print("\n Congratulations! You found the gold!")
            found_gold = True

    if not found_gold:
        print("\n Game over. You didn't find the gold this time.")

if __name__ == "__main__":
    main()
