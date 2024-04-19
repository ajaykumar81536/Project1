import mysql.connector

config = {
    'user': 'your_username',
    'password': 'your_password',
    'host': 'localhost',
    'database': 'your_database_name'
}

conn = mysql.connector.connect(**config)
cursor = conn.cursor()

# Create a table if it doesn't exist
create_table_query = """
CREATE TABLE IF NOT EXISTS students (
    id INT AUTO_INCREMENT PRIMARY KEY,
    name VARCHAR(255),
    age INT
)
"""
cursor.execute(create_table_query)

# Insert data into the table
insert_data_query = """
INSERT INTO students (name, age) VALUES (%s, %s)
"""
data_to_insert = [
    ("Alice", 25),
    ("Bob", 28),
    ("Charlie", 22)
]
cursor.executemany(insert_data_query, data_to_insert)
conn.commit()

# Fetch data from the table
fetch_data_query = "SELECT * FROM students"
cursor.execute(fetch_data_query)
fetched_data = cursor.fetchall()

# Display fetched data
print("Fetched Data:")
for row in fetched_data:
    print(f"ID: {row[0]}, Name: {row[1]}, Age: {row[2]}")

# Close the cursor and connection
cursor.close()
conn.close()
