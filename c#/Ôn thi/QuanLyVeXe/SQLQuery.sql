CREATE DATABASE BENXE

USE BENXE
CREATE TABLE QLVX(
MaSoVe			nvarchar(250)		primary key,
DiemXuatPhat	nvarchar(500)		,
DiemDen			nvarchar(500)		,
GioXuatPhat		time				,
GiaTien			real				
)

insert into QLVX values('VE1', N'Thái Nguyên', N'Hà Nội', '13:15',10500),
						('VE2', N'Thái Nguyên', N'Thanh Hóa', '14:15',11000.5)