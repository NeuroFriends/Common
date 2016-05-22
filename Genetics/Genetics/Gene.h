//Gene.h by Kostya Kozachuck as neurocod - 2016.05.22 14:17:37
#pragma once

class Gene {
	public:
		using Data = QLatin1String;//ATGC or some text for debug purpose
		Data _data;

		Gene();
		Gene(const Data & data);
		virtual ~Gene() {}
		bool operator==(const Gene & other)const;
		bool operator<(const Gene & other)const;

		static const Gene MaleGeneInstance;
};