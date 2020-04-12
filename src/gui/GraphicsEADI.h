/****************************************************************************//*
 * Copyright (C) 2020 Marek M. Cel
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

#include <Defines.h>

////////////////////////////////////////////////////////////////////////////////

/**
 * @brief This class provides EADI widget.
 */
class GraphicsEADI : public QGraphicsView
{
    Q_OBJECT

public:

    enum FlightMode { FM_OFF = 0, FM_FD, FM_CMD };
    enum SpeedMode  { SM_OFF = 0, SM_FMC_SPD };

    enum LNAV { LNAV_OFF = 0, LNAV_HDG, LNAV_NAV, LNAV_NAV_ARM, LNAV_APR, LNAV_APR_ARM, LNAV_BC, LNAV_BC_ARM };
    enum VNAV { VNAV_OFF = 0, VNAV_ALT, VNAV_IAS, VNAV_VS, VNAV_ALT_SEL, VNAV_GS, VNAV_GS_ARM };

    /** Constructor. */
    explicit GraphicsEADI( QWidget *parent = NULLPTR );

    /** Destructor. */
    virtual ~GraphicsEADI();

    /** */
    void reinit();

    /** */
    inline void setFlightMode( FlightMode flightMode )
    {
        _flightMode = flightMode;
    }

    /** */
    inline void setSpeedMode( SpeedMode speedMode )
    {
        _speedMode = speedMode;
    }

    /** */
    inline void setLNAV( LNAV lnav )
    {
        _lnav = lnav;
    }

    /** */
    inline void setVNAV( VNAV vnav )
    {
        _vnav = vnav;
    }

    /** @param roll angle [deg] */
    inline void setRoll( float roll )
    {
        _adi->setRoll( roll );
    }

    /** @param pitch angle [deg] */
    inline void setPitch( float pitch )
    {
        _adi->setPitch( pitch );
    }

    /** @param normalized slip or skid (range from -1.0 to 1.0) */
    inline void setSlipSkid( float slipSkid )
    {
        _adi->setSlipSkid( slipSkid );
    }

    /**
     * @param normalized turn rate (range from -1.0 to 1.0),
     * hash marks positions are set to be -0.5 and 0.5 */
    inline void setTurnRate( float turnRate )
    {
        _adi->setTurnRate( turnRate );
    }

    /**
     * @param normalized horizontal deviation dot position (range from -1.0 to 1.0)
     * @param normalized vertical deviation dot position (range from -1.0 to 1.0)
     * @param deviation horizontal dot visibility
     * @param deviation vertical dot visibility */
    inline void setDots( float dotH, float dotV, bool visibleH, bool visibleV )
    {
        _adi->setDots( dotH, dotV, visibleH, visibleV );
    }

    /**
     * @param FD roll angle [deg]
     * @param FD pitch angle [deg]
     * @param FD visibility */
    inline void setFD( float roll, float pitch, bool visible = true )
    {
        _adi->setFD( roll, pitch, visible );
    }

    /** @param stall flag */
    inline void setStall( bool stall )
    {
        _adi->setStall( stall );
    }

    /** @param altitude (dimensionless numeric value) */
    inline void setAltitude( float altitude )
    {
        _alt->setAltitude( altitude );
    }

    /** @param airspeed (dimensionless numeric value) */
    inline void setAirspeed( float airspeed )
    {
        _asi->setAirspeed( airspeed );
    }

    /** @param Mach number */
    inline void setMachNo( float machNo )
    {
        _asi->setMachNo( machNo );
    }

    /** @param heading [deg] */
    inline void setHeading( float heading )
    {
        _hdg->setHeading( heading );
    }

    /** @param climb rate (dimensionless numeric value)  */
    inline void setClimbRate( float climbRate )
    {
        _vsi->setClimbRate( climbRate );
    }

    /** @param airspeed (dimensionless numeric value) */
    inline void setAirspeedSel( double airspeed )
    {
        _asi->setAirspeedSel( airspeed );
    }

    /** @param altitude (dimensionless numeric value) */
    inline void setAltitudeSel( double altitude )
    {
        _alt->setAltitudeSel( altitude );
    }

    /** @param heading [deg] */
    inline void setHeadingSel( float heading )
    {
        _hdg->setHeadingSel( heading );
    }

    /** @param vfe (dimensionless numeric value) */
    inline void setVfe( double vfe )
    {
        _asi->setVfe( vfe );
    }

    /** @param vne (dimensionless numeric value) */
    inline void setVne( double vne )
    {
        _asi->setVne( vne );
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

    int _timerId;                           ///<

    QGraphicsScene *_scene;                 ///< graphics scene

    GraphicsEADI::ADI *_adi;                ///<
    GraphicsEADI::ALT *_alt;                ///<
    GraphicsEADI::ASI *_asi;                ///<
    GraphicsEADI::HDG *_hdg;                ///<
    GraphicsEADI::VSI *_vsi;                ///<

    QGraphicsSvgItem *_itemBack;            ///< PFD background
    QGraphicsSvgItem *_itemMask;            ///< PFD mask

    QGraphicsTextItem *_itemFMA;            ///< FMA (Flight Mode Annunciator)
    QGraphicsTextItem *_itemSPD;

    QGraphicsTextItem *_itemLNAV;           ///< LNAV (Lateral Navigation Mode)
    QGraphicsTextItem *_itemVNAV;           ///< VNAV (Vertical Navigation Mode)

    QGraphicsTextItem *_itemLNAV_ARM;       ///< LNAV (Lateral Navigation Mode)
    QGraphicsTextItem *_itemVNAV_ARM;       ///< LNAV (Lateral Navigation Mode)

    FlightMode _flightMode;                 ///<
    SpeedMode  _speedMode;                  ///<

    LNAV _lnav;                             ///<
    VNAV _vnav;                             ///<

    float _scaleX;                          ///<
    float _scaleY;                          ///<

    QPointF _originalFMA;
    QPointF _originalSPD;

    QPointF _originalLNAV;
    QPointF _originalVNAV;

    QPointF _originalLNAV_ARM;
    QPointF _originalVNAV_ARM;

    const int _originalHeight;              ///< [px]
    const int _originalWidth;               ///< [px]

    const int _backZ;                       ///<
    const int _maskZ;                       ///<
    const int _textZ;                       ///<

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

        QGraphicsScene *_scene;             ///< graphics scene

        QGraphicsSvgItem  *_itemBack;       ///< background
        QGraphicsSvgItem  *_itemLadd;       ///< pitch ladder
        QGraphicsSvgItem  *_itemRoll;       ///< roll mask
        QGraphicsSvgItem  *_itemSlip;       ///< slip indicator
        QGraphicsSvgItem  *_itemTurn;       ///< turn rate indicator
        QGraphicsSvgItem  *_itemDotH;       ///<
        QGraphicsSvgItem  *_itemDotV;       ///<
        QGraphicsSvgItem  *_itemFD;         ///< flight director
        QGraphicsSvgItem  *_itemStall;      ///< stall warning
        QGraphicsSvgItem  *_itemMask;       ///< adi mask
        QGraphicsSvgItem  *_itemScaleH;     ///<
        QGraphicsSvgItem  *_itemScaleV;     ///<

        float _roll;                        ///< [deg]
        float _pitch;                       ///< [deg]
        float _slipSkid;                    ///< -1.0 ... 1.0
        float _turnRate;                    ///< -1.0 ... 1.0
        float _dotH;                        ///< -1.0 ... 1.0
        float _dotV;                        ///< -1.0 ... 1.0
        float _fdRoll;                      ///< [deg]
        float _fdPitch;                     ///< [deg]

        bool _dotVisibleH;                  ///<
        bool _dotVisibleV;                  ///<
        bool _fdVisible;                    ///<

        bool _stall;                        ///<

        float _laddDeltaX_new;              ///<
        float _laddDeltaX_old;              ///<
        float _laddDeltaY_new;              ///<
        float _laddDeltaY_old;              ///<
        float _laddBackDeltaX_new;          ///<
        float _laddBackDeltaX_old;          ///<
        float _laddBackDeltaY_new;          ///<
        float _laddBackDeltaY_old;          ///<
        float _slipDeltaX_new;              ///<
        float _slipDeltaX_old;              ///<
        float _slipDeltaY_new;              ///<
        float _slipDeltaY_old;              ///<
        float _turnDeltaX_new;              ///<
        float _turnDeltaX_old;              ///<
        float _dotHDeltaX_new;              ///<
        float _dotHDeltaX_old;              ///<
        float _dotVDeltaY_new;              ///<
        float _dotVDeltaY_old;              ///<
        float _fdDeltaX_new;                ///<
        float _fdDeltaX_old;                ///<
        float _fdDeltaY_new;                ///<
        float _fdDeltaY_old;                ///<

        float _scaleX;                      ///<
        float _scaleY;                      ///<

        const float _originalPixPerDeg;     ///< [px/deg] pixels to move pitch ladder due to 1 deg pitch
        const float _deltaLaddBack_max;     ///< [px] max pitch ladder background deflection
        const float _deltaLaddBack_min;     ///< [px] min pitch ladder background deflection
        const float _maxSlipDeflection;     ///< [px] max slip indicator deflection
        const float _maxTurnDeflection;     ///< [px] max turn indicator deflection
        const float _maxDotsDeflection;     ///<

        QPointF _originalAdiCtr;            ///<
        QPointF _originalBackPos;           ///<
        QPointF _originalLaddPos;           ///<
        QPointF _originalRollPos;           ///<
        QPointF _originalSlipPos;           ///<
        QPointF _originalTurnPos;           ///<
        QPointF _originalDotHPos;           ///<
        QPointF _originalDotVPos;           ///<
        QPointF _originalFdPos;             ///<
        QPointF _originalStallPos;          ///<
        QPointF _originalScaleHPos;         ///<
        QPointF _originalScaleVPos;         ///<

        const int _backZ;                   ///<
        const int _laddZ;                   ///<
        const int _rollZ;                   ///<
        const int _slipZ;                   ///<
        const int _dotsZ;                   ///<
        const int _fdZ;                     ///<
        const int _scalesZ;                 ///<
        const int _maskZ;                   ///<
        const int _turnZ;                   ///<
        const int _stallZ;                  ///<

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
        void setAltitudeSel( double altitude );

    private:

        QGraphicsScene *_scene;             ///< graphics scene

        QGraphicsSvgItem  *_itemBack;       ///<
        QGraphicsSvgItem  *_itemScale1;     ///<
        QGraphicsSvgItem  *_itemScale2;     ///<
        QGraphicsTextItem *_itemLabel1;     ///<
        QGraphicsTextItem *_itemLabel2;     ///<
        QGraphicsTextItem *_itemLabel3;     ///<
        QGraphicsSvgItem  *_itemGround;     ///<
        QGraphicsSvgItem  *_itemBugAlt;     ///<
        QGraphicsSvgItem  *_itemFrame;      ///<
        QGraphicsTextItem *_itemAltitude;   ///<
        QGraphicsTextItem *_itemPressure;   ///<
        QGraphicsTextItem *_itemSetpoint;   ///<

        float _altitude;                    ///<
        float _altitude_sel;                ///<

        float _scale1DeltaY_new;            ///<
        float _scale1DeltaY_old;            ///<
        float _scale2DeltaY_new;            ///<
        float _scale2DeltaY_old;            ///<
        float _groundDeltaY_new;            ///<
        float _groundDeltaY_old;            ///<
        float _labelsDeltaY_new;            ///<
        float _labelsDeltaY_old;            ///<
        float _bugDeltaY_new;               ///<
        float _bugDeltaY_old;               ///<

        float _scaleX;                      ///<
        float _scaleY;                      ///<

        const float _originalPixPerAlt;     ///< [px/altitude unit]
        const float _originalScaleHeight;   ///< [px]
        const float _originalLabelsX;       ///< [px]
        const float _originalLabel1Y;       ///< [px]
        const float _originalLabel2Y;       ///< [px]
        const float _originalLabel3Y;       ///< [px]

        QPointF _originalBackPos;           ///<
        QPointF _originalScale1Pos;         ///<
        QPointF _originalScale2Pos;         ///<
        QPointF _originalGroundPos;         ///<
        QPointF _originalFramePos;          ///<
        QPointF _originalAltitudeCtr;       ///<
        QPointF _originalPressureCtr;       ///<
        QPointF _originalAltitudeSet;       ///<

        const int _backZ;                   ///<
        const int _scaleZ;                  ///<
        const int _labelsZ;                 ///<
        const int _groundZ;                 ///<
        const int _altBugZ;                 ///<
        const int _frameZ;                  ///<
        const int _frameTextZ;              ///<

        void reset();

        void updateAltitude();
        void updateAltitudeBug();
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
        void setAirspeedSel( double airspeed );
        void setVfe( double vfe );
        void setVne( double vne );

    private:

        QGraphicsScene *_scene;             ///< graphics scene

        QGraphicsSvgItem  *_itemBack;       ///<
        QGraphicsSvgItem  *_itemScale1;     ///<
        QGraphicsSvgItem  *_itemScale2;     ///<
        QGraphicsTextItem *_itemLabel1;     ///<
        QGraphicsTextItem *_itemLabel2;     ///<
        QGraphicsTextItem *_itemLabel3;     ///<
        QGraphicsTextItem *_itemLabel4;     ///<
        QGraphicsTextItem *_itemLabel5;     ///<
        QGraphicsTextItem *_itemLabel6;     ///<
        QGraphicsTextItem *_itemLabel7;     ///<
        QGraphicsSvgItem  *_itemBugIAS;     ///<
        QGraphicsSvgItem  *_itemFrame;      ///<
        QGraphicsRectItem *_itemVfe;        ///<
        QGraphicsSvgItem  *_itemVne;        ///<
        QGraphicsTextItem *_itemAirspeed;   ///<
        QGraphicsTextItem *_itemMachNo;     ///<
        QGraphicsTextItem *_itemSetpoint;   ///<

        QBrush _vfeBrush;                   ///<
        QPen _vfePen;                       ///<

        float _airspeed;                    ///<
        float _machNo;                      ///<
        float _airspeed_sel;                ///<
        float _vfe;                         ///<
        float _vne;                         ///<

        float _scale1DeltaY_new;            ///<
        float _scale1DeltaY_old;            ///<
        float _scale2DeltaY_new;            ///<
        float _scale2DeltaY_old;            ///<
        float _labelsDeltaY_new;            ///<
        float _labelsDeltaY_old;            ///<
        float _bugDeltaY_new;               ///<
        float _bugDeltaY_old;               ///<
        float _vneDeltaY_new;               ///<
        float _vneDeltaY_old;               ///<

        float _scaleX;                      ///<
        float _scaleY;                      ///<

        const float _originalPixPerSpd;     ///< [px/airspeed unit]
        const float _originalScaleHeight;   ///< [px]
        const float _originalLabelsX;       ///< [px]
        const float _originalLabel1Y;       ///< [px]
        const float _originalLabel2Y;       ///< [px]
        const float _originalLabel3Y;       ///< [px]
        const float _originalLabel4Y;       ///< [px]
        const float _originalLabel5Y;       ///< [px]
        const float _originalLabel6Y;       ///< [px]
        const float _originalLabel7Y;       ///< [px]
        const float _originalVfeWidth;

        QPointF _originalBackPos;           ///<
        QPointF _originalScale1Pos;         ///<
        QPointF _originalScale2Pos;         ///<
        QPointF _originalFramePos;          ///<
        QPointF _originalAirspeedCtr;       ///<
        QPointF _originalMachNoCtr;         ///<
        QPointF _originalAirspeedSet;       ///<
        QPointF _originalVfePos;            ///<

        const int _backZ;                   ///<
        const int _scaleZ;                  ///<
        const int _labelsZ;                 ///<
        const int _iasBugZ;                 ///<
        const int _iasVfeZ;                 ///<
        const int _iasVneZ;                 ///<
        const int _frameZ;                  ///<
        const int _frameTextZ;              ///<

        void reset();

        void updateAirspeed();
        void updateAirspeedBug();
        void updateScale();
        void updateScaleLabels();
        void updateVfe();
        void updateVne();
    };

    /** Heading Scale */
    class HDG
    {
    public:
        HDG( QGraphicsScene *scene );

        void init( float scaleX, float scaleY );
        void update( float scaleX, float scaleY );

        void setHeading( float heading );
        void setHeadingSel( float heading );

    private:

        QGraphicsScene *_scene;             ///< graphics scene

        QGraphicsSvgItem  *_itemBack;       ///<
        QGraphicsSvgItem  *_itemFace;       ///< heading face
        QGraphicsSvgItem  *_itemHdgBug;     ///<
        QGraphicsSvgItem  *_itemMarks;      ///< HSI markings
        QGraphicsTextItem *_itemFrameText;  ///<

        float _heading;                     ///< [deg]
        float _heading_sel;                 ///< [deg]

        float _scaleX;                      ///<
        float _scaleY;                      ///<

        QPointF _originalHsiCtr;            ///<
        QPointF _originalBackPos;           ///<
        QPointF _originalFacePos;           ///<
        QPointF _originalBugPos;            ///<
        QPointF _originalMarksPos;          ///<
        QPointF _originalFrameTextCtr;      ///<

        const int _backZ;                   ///<
        const int _faceZ;                   ///<
        const int _hdgBugZ;                 ///<
        const int _marksZ;                  ///<
        const int _frameTextZ;              ///<

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

        QGraphicsScene *_scene;             ///< graphics scene

        QGraphicsSvgItem  *_itemScale;      ///< climb rate scale
        QGraphicsRectItem *_itemMarker;     ///<

        float _climbRate;                   ///<

        float _scaleX;                      ///<
        float _scaleY;                      ///<

        const float _originalMarkerWidth;
        const float _originalPixPerSpd1;    ///< [px/vertical speed unit] up to 100 vsu
        const float _originalPixPerSpd2;    ///< [px/vertical speed unit] from 100 to 200 vsu
        const float _originalPixPerSpd4;    ///< [px/vertical speed unit] from 200 to 400 vsu

        QPointF _originalScalePos;          ///<
        QPointF _originalMarkerPos;         ///<

        QBrush _markerBrush;                ///<

        QPen _markerPen;                    ///<

        const int _scaleZ;                  ///<
        const int _markerZ;                 ///<

        void reset();

        void updateVSI();
    };
};

////////////////////////////////////////////////////////////////////////////////

#endif // GRAPHICSEADI_H
