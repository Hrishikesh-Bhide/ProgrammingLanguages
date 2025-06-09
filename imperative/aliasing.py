# Case 1: Assignment creates an alias (both 'a' and 'b' refer to the same list)
a = [1, 2, 3]
b = a           # 'b' points to the same list as 'a'
a.append(10)    # Modifies the list in place
print(a)        # Output: [1, 2, 3, 10]
print(b)        # Output: [1, 2, 3, 10] — same as 'a' because both refer to the same object

# Case 2: Creating a shallow copy of the list
a = [1, 2, 3]
b = a.copy()    # 'b' is now a separate copy of 'a'
a.append(10)    # Only modifies 'a'; 'b' remains unchanged
print(a)        # Output: [1, 2, 3, 10]
print(b)        # Output: [1, 2, 3] — unaffected by changes to 'a'

# Case 3: Reassignment of immutable types (integers)
a = 5
b = a           # 'b' gets a copy of the value 5
a = a + 5       # 'a' is now 10; a new integer object is created and 'a' points to it
print(a)        # Output: 10
print(b)        # Output: 5 — remains unchanged because integers are immutable and reassignment creates a new binding
