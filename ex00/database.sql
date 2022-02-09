/*
** for mac:
** mysql.server start
** mysql -u root
** mysql.server stop
*/

CREATE DATABASE Diasoft;

USE Diasoft;

CREATE TABLE Departments(
	Id INT PRIMARY KEY,
	Name VARCHAR(255) NOT NULL
);
INSERT INTO Departments (Id, Name) VALUES (1001, "Бухгалтерия"), (1002, "Юридический отдел"), (1003, "Отдел Разработки");

CREATE TABLE Employee(
	Id INT PRIMARY KEY,
	FIO VARCHAR(255) NOT NULL,
	ExtidDepartments INT NOT NULL,
	FOREIGN KEY (ExtidDepartments) references Departments(Id)
);

INSERT INTO Employee (Id, FIO, ExtidDepartments) VALUES
	(5011, "Иванов Иван Иванович", 1001),
	(5012, "Петров", 1002),
	(5013, "Сидоров", 1001),
	(5014, "Курочкин", 1003);