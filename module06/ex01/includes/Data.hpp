#pragma once

class Data {
	public:
		char	cmember;
		int		imember;
		float	fmember;
		double	dmember;

		Data();
		Data(const Data &toCopy);
		Data &operator=(const Data &toCopy);
		~Data();
	private:
	};
