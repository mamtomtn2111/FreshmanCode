CREATE DATABASE TEST_SQL_C#

USE TEST_SQL_C#

create table SACH
(MaSach			char(50)		primary key,
TieuDe			char(500),
Gia				real,
SoLuong			int)

insert into SACH
values('A3C5','Murachs ASP NET 3.5 web programming', 54.000, 4637),
('A3VB','Murachs ASP NET 3.5 web programming', 54.500, 3974)