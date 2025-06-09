def room1():
    yield "Door 1-1: Empty"
    yield "Door 1-2: Empty"
    yield "Door 1-3: Empty"

def room2():
    yield "Door 2-1: Empty"
    yield "Door 2-2: Gold!"
    yield "Door 2-3: Empty"

def room3():
    yield "Door 3-1: Empty"
    yield "Door 3-2: Empty"
    yield "Door 3-3: Empty"

def main():
    r1 = room1()
    r2 = room2()
    r3 = room3()

    doors_opened = 0
    max_doors = 5
    found_gold = False

    print("You have 5 attempts to open doors across 3 rooms.")
    print("Choose which room's door to open by typing 1, 2, or 3.")

    while doors_opened < max_doors and not found_gold:
        choice = input(f"\nOpen door from room (1, 2, or 3) [Attempt {doors_opened + 1}/{max_doors}]: ")
        if choice not in ('1', '2', '3'):
            print("Invalid choice. Try again.")
            continue

        try:
            if choice == '1':
                result = next(r1)
            elif choice == '2':
                result = next(r2)
            else:
                result = next(r3)
        except StopIteration:
            print(f"No more doors to open in room {choice}. Try a different room.")
            continue

        print(f"You opened {result}")
        doors_opened += 1

        if "Gold" in result:
            print("\n Congratulations! You found the gold!")
            found_gold = True

    if not found_gold:
        print("\nGame over. You didn't find the gold this time.")

if __name__ == "__main__":
    main()
