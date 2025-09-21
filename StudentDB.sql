CREATE TABLE Student (
	id INT IDENTITY PRIMARY KEY,
	StudentNumber NVARCHAR(20) UNIQUE,
	name NVARCHAR(50),
	birthday DATE,
	student_class NVARCHAR(20),
	GPA FLOAT
);
