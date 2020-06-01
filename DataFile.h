#pragma once

#include <string>

class DataFile {
public:

	virtual ~DataFile() {
	}

	friend std::ostream& operator<<(std::ostream& os, DataFile const& me) {
		os << me.formatToString();

		return os;
	}

	// Format the content into string
	virtual std::string formatToString() const {

		// For derived implementation

		return std::string();
	}
};
