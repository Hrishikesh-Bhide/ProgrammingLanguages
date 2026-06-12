def describe_pet(animal, name="Unknown", **attributes):
    print(f"{name} is a {animal}.")

    for key, value in attributes.items():
        print(f"{key.capitalize()}: {value}")

describe_pet("Dog", "Rex", color = "Brown", age = 30)
describe_pet("Cat", mood = "Jolly", legs = 4)