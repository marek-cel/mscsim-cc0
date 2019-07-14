/****************************************************************************//*
 * Copyright (C) 2019 Marek M. Cel
 *
 * Creative Commons Legal Code
 *
 * CC0 1.0 Universal
 *
 *     CREATIVE COMMONS CORPORATION IS NOT A LAW FIRM AND DOES NOT PROVIDE
 *     LEGAL SERVICES. DISTRIBUTION OF THIS DOCUMENT DOES NOT CREATE AN
 *     ATTORNEY-CLIENT RELATIONSHIP. CREATIVE COMMONS PROVIDES THIS
 *     INFORMATION ON AN "AS-IS" BASIS. CREATIVE COMMONS MAKES NO WARRANTIES
 *     REGARDING THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS
 *     PROVIDED HEREUNDER, AND DISCLAIMS LIABILITY FOR DAMAGES RESULTING FROM
 *     THE USE OF THIS DOCUMENT OR THE INFORMATION OR WORKS PROVIDED
 *     HEREUNDER.
 *
 * Statement of Purpose
 *
 * The laws of most jurisdictions throughout the world automatically confer
 * exclusive Copyright and Related Rights (defined below) upon the creator
 * and subsequent owner(s) (each and all, an "owner") of an original work of
 * authorship and/or a database (each, a "Work").
 *
 * Certain owners wish to permanently relinquish those rights to a Work for
 * the purpose of contributing to a commons of creative, cultural and
 * scientific works ("Commons") that the public can reliably and without fear
 * of later claims of infringement build upon, modify, incorporate in other
 * works, reuse and redistribute as freely as possible in any form whatsoever
 * and for any purposes, including without limitation commercial purposes.
 * These owners may contribute to the Commons to promote the ideal of a free
 * culture and the further production of creative, cultural and scientific
 * works, or to gain reputation or greater distribution for their Work in
 * part through the use and efforts of others.
 *
 * For these and/or other purposes and motivations, and without any
 * expectation of additional consideration or compensation, the person
 * associating CC0 with a Work (the "Affirmer"), to the extent that he or she
 * is an owner of Copyright and Related Rights in the Work, voluntarily
 * elects to apply CC0 to the Work and publicly distribute the Work under its
 * terms, with knowledge of his or her Copyright and Related Rights in the
 * Work and the meaning and intended legal effect of CC0 on those rights.
 *
 * 1. Copyright and Related Rights. A Work made available under CC0 may be
 * protected by copyright and related or neighboring rights ("Copyright and
 * Related Rights"). Copyright and Related Rights include, but are not
 * limited to, the following:
 *
 *   i. the right to reproduce, adapt, distribute, perform, display,
 *      communicate, and translate a Work;
 *  ii. moral rights retained by the original author(s) and/or performer(s);
 * iii. publicity and privacy rights pertaining to a person's image or
 *      likeness depicted in a Work;
 *  iv. rights protecting against unfair competition in regards to a Work,
 *      subject to the limitations in paragraph 4(a), below;
 *   v. rights protecting the extraction, dissemination, use and reuse of data
 *      in a Work;
 *  vi. database rights (such as those arising under Directive 96/9/EC of the
 *      European Parliament and of the Council of 11 March 1996 on the legal
 *      protection of databases, and under any national implementation
 *      thereof, including any amended or successor version of such
 *      directive); and
 * vii. other similar, equivalent or corresponding rights throughout the
 *      world based on applicable law or treaty, and any national
 *      implementations thereof.
 *
 * 2. Waiver. To the greatest extent permitted by, but not in contravention
 * of, applicable law, Affirmer hereby overtly, fully, permanently,
 * irrevocably and unconditionally waives, abandons, and surrenders all of
 * Affirmer's Copyright and Related Rights and associated claims and causes
 * of action, whether now known or unknown (including existing as well as
 * future claims and causes of action), in the Work (i) in all territories
 * worldwide, (ii) for the maximum duration provided by applicable law or
 * treaty (including future time extensions), (iii) in any current or future
 * medium and for any number of copies, and (iv) for any purpose whatsoever,
 * including without limitation commercial, advertising or promotional
 * purposes (the "Waiver"). Affirmer makes the Waiver for the benefit of each
 * member of the public at large and to the detriment of Affirmer's heirs and
 * successors, fully intending that such Waiver shall not be subject to
 * revocation, rescission, cancellation, termination, or any other legal or
 * equitable action to disrupt the quiet enjoyment of the Work by the public
 * as contemplated by Affirmer's express Statement of Purpose.
 *
 * 3. Public License Fallback. Should any part of the Waiver for any reason
 * be judged legally invalid or ineffective under applicable law, then the
 * Waiver shall be preserved to the maximum extent permitted taking into
 * account Affirmer's express Statement of Purpose. In addition, to the
 * extent the Waiver is so judged Affirmer hereby grants to each affected
 * person a royalty-free, non transferable, non sublicensable, non exclusive,
 * irrevocable and unconditional license to exercise Affirmer's Copyright and
 * Related Rights in the Work (i) in all territories worldwide, (ii) for the
 * maximum duration provided by applicable law or treaty (including future
 * time extensions), (iii) in any current or future medium and for any number
 * of copies, and (iv) for any purpose whatsoever, including without
 * limitation commercial, advertising or promotional purposes (the
 * "License"). The License shall be deemed effective as of the date CC0 was
 * applied by Affirmer to the Work. Should any part of the License for any
 * reason be judged legally invalid or ineffective under applicable law, such
 * partial invalidity or ineffectiveness shall not invalidate the remainder
 * of the License, and in such case Affirmer hereby affirms that he or she
 * will not (i) exercise any of his or her remaining Copyright and Related
 * Rights in the Work or (ii) assert any associated claims and causes of
 * action with respect to the Work, in either case contrary to Affirmer's
 * express Statement of Purpose.
 *
 * 4. Limitations and Disclaimers.
 *
 *  a. No trademark or patent rights held by Affirmer are waived, abandoned,
 *     surrendered, licensed or otherwise affected by this document.
 *  b. Affirmer offers the Work as-is and makes no representations or
 *     warranties of any kind concerning the Work, express, implied,
 *     statutory or otherwise, including without limitation warranties of
 *     title, merchantability, fitness for a particular purpose, non
 *     infringement, or the absence of latent or other defects, accuracy, or
 *     the present or absence of errors, whether or not discoverable, all to
 *     the greatest extent permissible under applicable law.
 *  c. Affirmer disclaims responsibility for clearing rights of other persons
 *     that may apply to the Work or any use thereof, including without
 *     limitation any person's Copyright and Related Rights in the Work.
 *     Further, Affirmer disclaims responsibility for obtaining any necessary
 *     consents, permissions or other rights required for any use of the
 *     Work.
 *  d. Affirmer understands and acknowledges that Creative Commons is not a
 *     party to this document and has no duty or obligation with respect to
 *     this CC0 or use of the Work.
 *
 ******************************************************************************/
#ifndef GRAPHICSEADI_H
#define GRAPHICSEADI_H

////////////////////////////////////////////////////////////////////////////////

#include <QGraphicsView>
#include <QGraphicsRectItem>
#include <QGraphicsSvgItem>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief This class provides EADI widget.
 */
class GraphicsEADI : public QGraphicsView
{
    Q_OBJECT

public:

    /** Constructor. */
    explicit GraphicsEADI( QWidget *parent = 0 );

    /** Destructor. */
    virtual ~GraphicsEADI();

    /** */
    void reinit();

    /** @param roll angle [deg] */
    inline void setRoll( float roll )
    {
        m_adi->setRoll( roll );
    }

    /** @param pitch angle [deg] */
    inline void setPitch( float pitch )
    {
        m_adi->setPitch( pitch );
    }

    /** @param normalized slip or skid (range from -1.0 to 1.0) */
    inline void setSlipSkid( float slipSkid )
    {
        m_adi->setSlipSkid( slipSkid );
    }

    /**
     * @param normalized turn rate (range from -1.0 to 1.0),
     * hash marks positions are set to be -0.5 and 0.5 */
    inline void setTurnRate( float turnRate )
    {
        m_adi->setTurnRate( turnRate );
    }

    /**
     * @param normalized horizontal deviation dot position (range from -1.0 to 1.0)
     * @param normalized vertical deviation dot position (range from -1.0 to 1.0)
     * @param deviation horizontal dot visibility
     * @param deviation vertical dot visibility */
    inline void setDots( float dotH, float dotV, bool visibleH, bool visibleV )
    {
        m_adi->setDots( dotH, dotV, visibleH, visibleV );
    }

    /**
     * @param FD roll angle [deg]
     * @param FD pitch angle [deg]
     * @param FD visibility */
    inline void setFD( float roll, float pitch, bool visible = true )
    {
        m_adi->setFD( roll, pitch, visible );
    }

    /** @param stall flag */
    inline void setStall( bool stall )
    {
        m_adi->setStall( stall );
    }

    /** @param altitude (dimensionless numeric value) */
    inline void setAltitude( float altitude )
    {
        m_alt->setAltitude( altitude );
    }

    /** @param airspeed (dimensionless numeric value) */
    inline void setAirspeed( float airspeed )
    {
        m_asi->setAirspeed( airspeed );
    }

    /** @param Mach number */
    inline void setMachNo( float machNo )
    {
        m_asi->setMachNo( machNo );
    }

    /** @param heading [deg] */
    inline void setHeading( float heading )
    {
        m_hdg->setHeading( heading );
    }

    /** @param climb rate (dimensionless numeric value)  */
    inline void setClimbRate( float climbRate )
    {
        m_vsi->setClimbRate( climbRate );
    }

protected:

    /** */
    void resizeEvent( QResizeEvent *event );

    /** */
    void timerEvent( QTimerEvent *event );

private:

    class ADI;
    class ALT;
    class ASI;
    class HDG;
    class VSI;

    int m_timerId;

    QGraphicsScene *m_scene;        ///< graphics scene

    GraphicsEADI::ADI *m_adi;
    GraphicsEADI::ALT *m_alt;
    GraphicsEADI::ASI *m_asi;
    GraphicsEADI::HDG *m_hdg;
    GraphicsEADI::VSI *m_vsi;

    QGraphicsSvgItem *m_itemBack;   ///< PFD background
    QGraphicsSvgItem *m_itemMask;   ///< PFD mask

    float m_scaleX; ///<
    float m_scaleY; ///<

    const int m_originalHeight;     ///< [px]
    const int m_originalWidth;      ///< [px]

    const int m_backZ;
    const int m_maskZ;

    void init();

    void reset();

    void updateView();

    /** Attitude Director Indicator */
    class ADI
    {
    public:
        ADI( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setRoll( float roll );
        void setPitch( float pitch );
        void setSlipSkid( float slipSkid );
        void setTurnRate( float turnRate );
        void setDots( float dotH, float dotV, bool visibleH, bool visibleV );
        void setFD( float roll, float pitch, bool visible = true );
        void setStall( bool stall );

    private:
        QGraphicsScene *m_scene;            ///< graphics scene

        QGraphicsSvgItem  *m_itemBack;      ///< background
        QGraphicsSvgItem  *m_itemLadd;      ///< pitch ladder
        QGraphicsSvgItem  *m_itemRoll;      ///< roll mask
        QGraphicsSvgItem  *m_itemSlip;      ///< slip indicator
        QGraphicsSvgItem  *m_itemTurn;      ///< turn rate indicator
        QGraphicsSvgItem  *m_itemDotH;
        QGraphicsSvgItem  *m_itemDotV;
        QGraphicsSvgItem  *m_itemFD;        ///< flight director
        QGraphicsSvgItem  *m_itemStall;     ///< stall warning
        QGraphicsSvgItem  *m_itemMask;      ///< adi mask
        QGraphicsSvgItem  *m_itemScaleH;
        QGraphicsSvgItem  *m_itemScaleV;

        float m_roll;           ///< [deg]
        float m_pitch;          ///< [deg]
        float m_slipSkid;       ///< -1.0 ... 1.0
        float m_turnRate;       ///< -1.0 ... 1.0
        float m_dotH;           ///< -1.0 ... 1.0
        float m_dotV;           ///< -1.0 ... 1.0
        float m_fdRoll;         ///< [deg]
        float m_fdPitch;        ///< [deg]

        bool m_dotVisibleH;
        bool m_dotVisibleV;
        bool m_fdVisible;

        bool m_stall;

        float m_laddDeltaX_new;
        float m_laddDeltaX_old;
        float m_laddDeltaY_new;
        float m_laddDeltaY_old;
        float m_laddBackDeltaX_new;
        float m_laddBackDeltaX_old;
        float m_laddBackDeltaY_new;
        float m_laddBackDeltaY_old;
        float m_slipDeltaX_new;
        float m_slipDeltaX_old;
        float m_slipDeltaY_new;
        float m_slipDeltaY_old;
        float m_turnDeltaX_new;
        float m_turnDeltaX_old;
        float m_dotHDeltaX_new;
        float m_dotHDeltaX_old;
        float m_dotVDeltaY_new;
        float m_dotVDeltaY_old;
        float m_fdDeltaX_new;
        float m_fdDeltaX_old;
        float m_fdDeltaY_new;
        float m_fdDeltaY_old;

        float m_scaleX;
        float m_scaleY;

        const float m_originalPixPerDeg;    ///< [px/deg] pixels to move pitch ladder due to 1 deg pitch
        const float m_deltaLaddBack_max;    ///< [px] max pitch ladder background deflection
        const float m_deltaLaddBack_min;    ///< [px] min pitch ladder background deflection
        const float m_maxSlipDeflection;    ///< [px] max slip indicator deflection
        const float m_maxTurnDeflection;    ///< [px] max turn indicator deflection
        const float m_maxDotsDeflection;

        QPointF m_originalAdiCtr;
        QPointF m_originalBackPos;
        QPointF m_originalLaddPos;
        QPointF m_originalRollPos;
        QPointF m_originalSlipPos;
        QPointF m_originalTurnPos;
        QPointF m_originalDotHPos;
        QPointF m_originalDotVPos;
        QPointF m_originalFdPos;
        QPointF m_originalStallPos;
        QPointF m_originalScaleHPos;
        QPointF m_originalScaleVPos;

        const int m_backZ;
        const int m_laddZ;
        const int m_rollZ;
        const int m_slipZ;
        const int m_dotsZ;
        const int m_fdZ;
        const int m_scalesZ;
        const int m_maskZ;
        const int m_turnZ;
        const int m_stallZ;

        void reset();

        void updateLadd( float delta, float sinRoll, float cosRoll );
        void updateLaddBack( float delta, float sinRoll, float cosRoll );
        void updateRoll();
        void updateSlipSkid( float sinRoll, float cosRoll );
        void updateTurnRate();
        void updateDots();
        void updateFD( float sinRoll, float cosRoll );
        void updateStall();
    };

    /** Altimeter */
    class ALT
    {
    public:
        ALT( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setAltitude( float altitude );

    private:

        QGraphicsScene *m_scene;    ///< graphics scene

        QGraphicsSvgItem  *m_itemBack;
        QGraphicsSvgItem  *m_itemScale1;
        QGraphicsSvgItem  *m_itemScale2;
        QGraphicsTextItem *m_itemLabel1;
        QGraphicsTextItem *m_itemLabel2;
        QGraphicsTextItem *m_itemLabel3;
        QGraphicsSvgItem  *m_itemGround;
        QGraphicsSvgItem  *m_itemFrame;
        QGraphicsTextItem *m_itemAltitude;
        QGraphicsTextItem *m_itemPressure;

        QColor m_frameTextColor;
        QColor m_pressTextColor;
        QColor m_labelsColor;

        QFont  m_frameTextFont;
        QFont  m_labelsFont;

        float m_altitude;

        float m_scale1DeltaY_new;
        float m_scale1DeltaY_old;
        float m_scale2DeltaY_new;
        float m_scale2DeltaY_old;
        float m_groundDeltaY_new;
        float m_groundDeltaY_old;
        float m_labelsDeltaY_new;
        float m_labelsDeltaY_old;

        float m_scaleX;     ///<
        float m_scaleY;     ///<

        const float m_originalPixPerAlt;    ///< [px/altitude unit]
        const float m_originalScaleHeight;  ///< [px]
        const float m_originalLabelsX;      ///< [px]
        const float m_originalLabel1Y;      ///< [px]
        const float m_originalLabel2Y;      ///< [px]
        const float m_originalLabel3Y;      ///< [px]

        QPointF m_originalBackPos;
        QPointF m_originalScale1Pos;
        QPointF m_originalScale2Pos;
        QPointF m_originalGroundPos;
        QPointF m_originalFramePos;
        QPointF m_originalAltitudeCtr;
        QPointF m_originalPressureCtr;

        const int m_backZ;
        const int m_scaleZ;
        const int m_labelsZ;
        const int m_groundZ;
        const int m_frameZ;
        const int m_frameTextZ;

        void reset();

        void updateAltitude();
        void updateScale();
        void updateScaleLabels();
    };

    /** Airspeed Indicator */
    class ASI
    {
    public:
        ASI( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setAirspeed( float airspeed );
        void setMachNo( float machNo );

    private:

        QGraphicsScene *m_scene;    ///< graphics scene

        QGraphicsSvgItem  *m_itemBack;
        QGraphicsSvgItem  *m_itemScale1;
        QGraphicsSvgItem  *m_itemScale2;
        QGraphicsTextItem *m_itemLabel1;
        QGraphicsTextItem *m_itemLabel2;
        QGraphicsTextItem *m_itemLabel3;
        QGraphicsTextItem *m_itemLabel4;
        QGraphicsTextItem *m_itemLabel5;
        QGraphicsTextItem *m_itemLabel6;
        QGraphicsTextItem *m_itemLabel7;
        QGraphicsSvgItem  *m_itemFrame;
        QGraphicsTextItem *m_itemAirspeed;
        QGraphicsTextItem *m_itemMachNo;

        QColor m_frameTextColor;
        QColor m_labelsColor;

        QFont  m_frameTextFont;
        QFont  m_labelsFont;

        float m_airspeed;
        float m_machNo;

        float m_scale1DeltaY_new;
        float m_scale1DeltaY_old;
        float m_scale2DeltaY_new;
        float m_scale2DeltaY_old;
        float m_labelsDeltaY_new;
        float m_labelsDeltaY_old;

        float m_scaleX;
        float m_scaleY;

        const float m_originalPixPerSpd;    ///< [px/airspeed unit]
        const float m_originalScaleHeight;  ///< [px]
        const float m_originalLabelsX;      ///< [px]
        const float m_originalLabel1Y;      ///< [px]
        const float m_originalLabel2Y;      ///< [px]
        const float m_originalLabel3Y;      ///< [px]
        const float m_originalLabel4Y;      ///< [px]
        const float m_originalLabel5Y;      ///< [px]
        const float m_originalLabel6Y;      ///< [px]
        const float m_originalLabel7Y;      ///< [px]

        QPointF m_originalBackPos;
        QPointF m_originalScale1Pos;
        QPointF m_originalScale2Pos;
        QPointF m_originalFramePos;
        QPointF m_originalAirspeedCtr;
        QPointF m_originalMachNoCtr;

        const int m_backZ;
        const int m_scaleZ;
        const int m_labelsZ;
        const int m_frameZ;
        const int m_frameTextZ;

        void reset();

        void updateAirspeed();
        void updateScale();
        void updateScaleLabels();
    };

    /** Heading Scale */
    class HDG
    {
    public:
        HDG( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setHeading( float heading );

    private:

        QGraphicsScene *m_scene;    ///< graphics scene

        QGraphicsSvgItem  *m_itemBack;
        QGraphicsSvgItem  *m_itemFace;          ///< heading face
        QGraphicsSvgItem  *m_itemMarks;         ///< HSI markings
        QGraphicsTextItem *m_itemFrameText;     ///<

        QColor m_frameTextColor;

        QFont  m_frameTextFont;

        float m_heading;    ///< [deg]

        float m_scaleX;     ///<
        float m_scaleY;     ///<

        QPointF m_originalHsiCtr;
        QPointF m_originalBackPos;
        QPointF m_originalFacePos;
        QPointF m_originalMarksPos;
        QPointF m_originalFrameTextCtr;

        const int m_backZ;
        const int m_faceZ;
        const int m_marksZ;
        const int m_frameTextZ;

        void reset();

        void updateHeading();
    };

    /** Vertical Speed Indicator */
    class VSI
    {
    public:
        VSI( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setClimbRate( float climbRate );

    private:

        QGraphicsScene *m_scene;            ///< graphics scene

        QGraphicsSvgItem  *m_itemScale;     ///< climb rate scale
        QGraphicsRectItem *m_itemMarker;    ///<

        float m_climbRate;

        float m_scaleX;
        float m_scaleY;

        const float m_originalMarkeWidth;
        const float m_originalPixPerSpd1;   ///< [px/vertical speed unit] up to 100 vsu
        const float m_originalPixPerSpd2;   ///< [px/vertical speed unit] from 100 to 200 vsu
        const float m_originalPixPerSpd4;   ///< [px/vertical speed unit] from 200 to 400 vsu

        QPointF m_originalScalePos;
        QPointF m_originalMarkerPos;

        QBrush m_markerBrush; ///<

        QPen m_markerPen;     ///<

        const int m_scaleZ;
        const int m_markerZ;

        void reset();

        void updateVSI();
    };
};

////////////////////////////////////////////////////////////////////////////////

#endif // GRAPHICSEADI_H
