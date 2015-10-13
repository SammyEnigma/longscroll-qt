#ifndef IMAGEITEMWIDGET_H
#define IMAGEITEMWIDGET_H

#include "longscroll-qt_global.h"
#include "contentiteminfo.h"
#include <QFrame>

LONGSCROLLQT_NAMESPACE_BEGIN

class ImageWidget;
class ContentWidget;

class LONGSCROLLQT_EXPORT ImageItemWidget : public QFrame
{
protected:
	ImageWidget * label = 0;
	bool fit = false;
	ContentItemInfo info;
	int itemIndex = -1;

protected:
	ImageItemWidget(ContentItemInfo const & info, int itemIndex, bool fit, bool loadImage, ContentWidget * cw, QWidget * parent);
public:
	ImageItemWidget(ContentItemInfo const & info, int itemIndex, bool fit = false, ContentWidget * cw = 0, QWidget * parent = 0);
	~ImageItemWidget();

public slots:
	virtual void updateSelection(QList<int> const & selection);

protected:
	void loadImage();
};

LONGSCROLLQT_NAMESPACE_END

#endif // IMAGEITEMWIDGET_H
