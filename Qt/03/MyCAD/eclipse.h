#ifndef ECLIPSE_H
#define ECLIPSE_H
#include "ishape.h"

class Eclipse : public IShape
{
public:
    Eclipse(QPoint &ptBegin, QPoint &ptEnd);

    bool Draw(QPainter& painter);

    QPoint m_ptBegin;
    QPoint m_ptEnd;
};

#endif // ECLIPSE_H
