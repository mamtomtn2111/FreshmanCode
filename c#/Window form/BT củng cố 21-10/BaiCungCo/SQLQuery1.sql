CREATE DATABASE BaiTap2110
USE BaiTap2110

CREATE TABLE BanThuoc
(MaThuoc		nvarchar(50)	primary key,
TenThuoc		nvarchar(250),
NgaySanXuat		date,
HanSuDung		date,
GiaTien			float)

insert into BanThuoc
values('THUOC1','beberine','10/10/2019','5/5/2021',5000),
		('THUOC2','Asprine','1/1/2020','1/2/2022',20000)