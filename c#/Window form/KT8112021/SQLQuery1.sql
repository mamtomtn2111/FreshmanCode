CREATE DATABASE KT8112021

USE KT8112021

CREATE TABLE HoaDon(
MaHoaDon		nvarchar(100)		primary key,
TenChuHo		nvarchar(250)		,
ThoiGian		date				,
ChiSoCu			real				,
ChiSoMoi		real				)

insert into HoaDon
		values('MA1',N'Nguyễn Văn A','02/14/2021',100,120),
		('MA2',N'Nguyễn Thị G','02/15/2021',110,150)