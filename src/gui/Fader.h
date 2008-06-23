/*
 *   $Id: PadButton.h,v 1.5 2007/01/26 07:39:55 rhizome Exp $
 * 
 *      Copyright (C) 2004-2008 Alex Marandon
 *
 *  This file is part of slag, a pattern-based audio sequencer.
 *
 *  slag is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  slag is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with slag; see the file COPYING.  If not, write to
 *  the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 */

#ifndef FADER_H
#define FADER_H

#include <QBrush>
#include <QPen>
#include <QPixmap>

#include <QWheelEvent>
#include <QPaintEvent>
#include <QMouseEvent>
#include <QWidget>

class Fader : public QWidget {
    Q_OBJECT
    public:
        Fader(QWidget* parent);
        void paintEvent (QPaintEvent *);
    public slots:
        virtual void setVolume(int);
    protected:
        QPen pen;
        QBrush brush;
        virtual QPixmap createPixmap();
        void mouseMoveEvent (QMouseEvent*);
        void wheelEvent(QWheelEvent*);
        virtual int volumePosition2Value(int);
        virtual QString cacheKey(int);
        int volume_position;
    signals:
        void volumeChanged(int);
};


#endif

//EOF
