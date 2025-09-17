CREATE DATABASE Students;
DROP DATABASE Students;
USE Students;
CREATE TABLE stu_table(
rollno int PRIMARY KEY,
studentname varchar(50),
marks float);

INSERT INTO stu_table values(1,"Harleen",20);
INSERT INTO stu_table values(2,"Kartik",25);
INSERT INTO stu_table values(3,"Imanpal",30);

SELECT * from stu_table;
/*CREATE DATABASE IF NOT EXISTS Students; //always use safe conditions like this
DROP DATABASE IF EXISTS Students;
*/
