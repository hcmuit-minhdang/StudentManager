import pyodbc

def get_connection():
    conn = pyodbc.connect(
        'DRIVER={SQL Server};'
        'SERVER=MINHDANG;'
        'DATABASE=StudentDB;'
        'Trusted_Connection=yes;'
    )
    return conn