CREATE DATABASE TH7NC

use TH7NC

CREATE TABLE QLSV
(MaSV		nvarchar(50)		primary key,
HoSV		nvarchar(250)		,
TenSV		nvarchar(250)		,
MaKhoa		nvarchar(250)		,
NgaySinh	date				,
GioiTinh	nvarchar(10))

insert into QLSV
		values('DTC1',N'Ngô Văn',N'Hà','IT','07/29/2001','Nam'),
			('DTC2',N'Nguyễn Thị',N'Thu','IT','09/20/2001',N'Nữ')