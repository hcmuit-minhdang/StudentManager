from db import get_connection

def add_Student():
    StudentNumber = input("Enter StudentNumber: ")
    name = input("Enter Student's Name: ")
    birthday = input("Enter Student's Birthday: ")
    student_class = input("Enter Student's class: ")
    GPA = float(input("Enter GPA: "))

    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute(
        "INSERT INTO Student (StudentNumber, name, birthday, student_class, GPA) VALUES (?, ?, ?, ?, ?)",
        (StudentNumber, name, birthday, student_class, GPA)
    )
    conn.commit()
    conn.close()
    print("Student ADDED!!!")


def view_Students():
    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute("SELECT * FROM Student")
    rows = cursor.fetchall()
    conn.close()

    print("\nStudent List:")
    for row in rows:
        print(row)


def update_Student():
    StudentNumber = input("Enter StudentNumber to update: ")
    new_gpa = float(input("Enter new GPA: "))

    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute(
        "UPDATE Student SET GPA = ? WHERE StudentNumber = ?",
        (new_gpa, StudentNumber)
    )
    conn.commit()
    conn.close()
    print("✏️ Student UPDATED!!!")


def delete_Student():
    StudentNumber = input("Enter StudentNumber to delete: ")

    conn = get_connection()
    cursor = conn.cursor()
    cursor.execute(
        "DELETE FROM Student WHERE StudentNumber = ?",
        (StudentNumber,)
    )
    conn.commit()
    conn.close()
    print("Student DELETED!!!")


def main():
    while True:
        print("\n--- Student Management ---")
        print("1. Add Student")
        print("2. View Students")
        print("3. Update Student")
        print("4. Delete Student")
        print("5. Exit")

        choice = input("Enter your choice: ")

        if choice == "1":
            add_Student()
        elif choice == "2":
            view_Students()
        elif choice == "3":
            update_Student()
        elif choice == "4":
            delete_Student()
        elif choice == "5":
            print("Goodbye")
            break
        else:
            print("Invalid choice, try again!")

if __name__ == "__main__":
    main()
