
#pragma once

#include <QList>
#include <QString>
#include "InputData.h"
namespace launchy {
class InputDataList : public QList<InputData> {
public:
	void parse(const QString& text);
	QString toString(bool omitLast = false) const;
};
}