CREATE DATABASE De4

USE De4

CREATE TABLE KHACHSAN
(SoPhong			nvarchar(50)		primary key,
SoGiuong			int					,
GiaTien				float				,
ThongTinThem		nvarchar(500)		,
TrangThaiHienTai	nvarchar(250))

insert into KHACHSAN
			values('DAC1','3','450',N'Có phòng tắm',N'Trống'),
				('DAC2','4','500',N'Có điều hòa',N'Đang sửa chữa'),
				('DAC3','5','300',N'Có view đẹp',N'Đang có người thuê')