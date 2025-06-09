def steps():
    print("A coroutine example")
    yield "Does it init?"
    print("Step 1: Starting")
    yield "Started"
    print("Step 2: Processing")
    yield "Processing"
    print("Step 3: Finishing")
    yield "Finished"

gen = steps()

user_input = input("Start process? (y/n): ").strip().lower()
if user_input == 'y':
    print(next(gen))

should_continue = input("Continue to next step? (y/n): ").strip().lower()
if should_continue == 'y':
    print(next(gen))

finalize = input("Finalize process? (y/n): ").strip().lower()
if finalize == 'y':
    print(next(gen))

print(next(gen))

# The next print(next(gen)) will cause an error as there are no more instructions
# to be executed in the coroutine
# print(next(gen))

