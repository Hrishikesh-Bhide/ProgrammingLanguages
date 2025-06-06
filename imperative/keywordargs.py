def print_kwargs(**kwargs):
    for key, value in kwargs.items():
        print(f"{key} = {value}")


def configure_system(**kwargs):
    if kwargs.get('debug'):
        print("Debug mode ON")
    if kwargs.get('logging') == 'verbose':
        print("Verbose logging enabled")
    print("System configured.")


configure_system(debug=100)




