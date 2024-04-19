def some_function():
    import json  # Move the import inside the function
    data = {'key': 'value'}
    json_data = json.dumps(data)
    return json_data