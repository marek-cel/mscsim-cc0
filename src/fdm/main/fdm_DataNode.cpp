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

#include <fdm/main/fdm_DataNode.h>

#include <limits>

#include <fdm/utils/fdm_String.h>

////////////////////////////////////////////////////////////////////////////////

using namespace fdm;

////////////////////////////////////////////////////////////////////////////////

DataNode::DataNode() :
    _parent( 0 ),
    _type( Group )
{
    _children.clear();
}

////////////////////////////////////////////////////////////////////////////////

DataNode::~DataNode()
{
    if ( _type == Group )
    {
        DataNodes::iterator it;

        it = _children.begin();

        while ( it != _children.end() )
        {
            if ( it->second )
            {
                delete it->second;
                it->second = 0;
            }

            ++it;
        }
    }

    _children.clear();
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::addNode( const char *path, Type type )
{
    if ( _type == Group )
    {
        std::string path_temp = path;

        path_temp = stripPathDots( path_temp.c_str() );

        if ( path_temp.length() > 0 )
        {
            path_temp = String::toLower( path_temp );

            std::string pathLead;
            std::string pathRest;

            breakPath( path_temp.c_str(), pathLead, pathRest );

            if ( pathRest.size() > 0 )
            {
                DataNode *node = 0;

                if ( _children.count( pathLead ) == 0 )
                {
                    addNode( pathLead.c_str(), Group );
                }

                node = findNode( pathLead.c_str() );

                if ( node )
                {
                    return node->addNode( pathRest.c_str(), type );
                }
            }
            else
            {
                if ( pathLead.size() > 0 )
                {
                    if ( _children.count( pathLead ) == 0 )
                    {
                        DataNode *node = createNode( pathLead.c_str(), type, this );

                        std::pair<DataNodes::iterator,bool> result;

                        result = _children.insert( std::pair<std::string,DataNode*>( pathLead, node ) );

                        if ( result.second == true )
                        {
                            return FDM_SUCCESS;
                        }
                        else
                        {
                            delete node;
                        }
                    }
                }
            }
        }
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

bool DataNode::getDatab() const
{
    if ( _type == Bool )
    {
        return _data.bData;
    }

    return std::numeric_limits< bool >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::getDatai() const
{
    if ( _type == Int )
    {
        return _data.iData;
    }

    return std::numeric_limits< int >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

long DataNode::getDatal() const
{
    if ( _type == Long )
    {
        return _data.lData;
    }

    return std::numeric_limits< long >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

float DataNode::getDataf() const
{
    if ( _type == Float )
    {
        return _data.fData;
    }

    return std::numeric_limits< float >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

double DataNode::getDatad() const
{
    if ( _type == Double )
    {
        return _data.dData;
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

DataNode* DataNode::getNode( const char *path )
{
    std::string path_temp = String::toLower( path );

    return findNode( path_temp.c_str() );
}

////////////////////////////////////////////////////////////////////////////////

std::string DataNode::getPath() const
{
    std::string path;
    path.clear();

    if ( _parent )
    {
        path += _parent->getPath();
    }

    path += ".";
    path += _name;

    return path;
}

////////////////////////////////////////////////////////////////////////////////

DataNode* DataNode::getRoot()
{
    if ( _parent )
    {
        return _parent->getRoot();
    }
    else
    {
        return this;
    }
}

////////////////////////////////////////////////////////////////////////////////

double DataNode::getValue() const
{
    switch ( _type )
    {
        case Group:  return std::numeric_limits< double >::quiet_NaN(); break;
        case Bool:   return (double)_data.bData; break;
        case Int:    return (double)_data.iData; break;
        case Long:   return (double)_data.lData; break;
        case Float:  return (double)_data.fData; break;
        case Double: return (double)_data.dData; break;
    }

    return std::numeric_limits< double >::quiet_NaN();
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setDatab( bool value )
{
    if ( _type == Bool )
    {
        _data.bData = value;
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setDatai( int value )
{
    if ( _type == Int )
    {
        _data.iData = value;
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setDatal( long value )
{
    if ( _type == Long )
    {
        _data.lData = value;
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setDataf( float value )
{
    if ( _type == Float )
    {
        _data.fData = value;
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setDatad( double value )
{
    if ( _type == Double )
    {
        _data.dData = value;
        return FDM_SUCCESS;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

int DataNode::setValue( double value )
{
    switch ( _type )
    {
        case Bool:   _data.bData = value != 0.0;  return FDM_SUCCESS; break;
        case Int:    _data.iData = (int)   value; return FDM_SUCCESS; break;
        case Long:   _data.lData = (long)  value; return FDM_SUCCESS; break;
        case Float:  _data.fData = (float) value; return FDM_SUCCESS; break;
        case Double: _data.dData =         value; return FDM_SUCCESS; break;

        default: return FDM_FAILURE; break;
    }

    return FDM_FAILURE;
}

////////////////////////////////////////////////////////////////////////////////

void DataNode::breakPath( const char *path, std::string &pathLead, std::string &pathRest )
{
    std::string str( path );

    size_t pos = str.find( '.' );

    pathLead.clear();

    if ( pos != std::string::npos )
    {
        pathLead = str.substr( 0 , pos );
        pathRest = str.substr( pos + 1 );
    }
    else
    {
        pathLead = path;
        pathRest.clear();
    }
}

////////////////////////////////////////////////////////////////////////////////

DataNode* DataNode::createNode( const char *name, Type type, DataNode *parent )
{
    std::string name_temp = String::toLower( name );

    DataNode *node = new DataNode();

    node->_parent = parent;

    node->_name = name_temp;
    node->_type = type;

    switch ( node->_type )
    {
        case Group:  node->_children.clear();    break;
        case Bool:   node->_data.bData = false;  break;
        case Int:    node->_data.iData = 0;      break;
        case Long:   node->_data.lData = 0L;     break;
        case Float:  node->_data.fData = 0.0f;   break;
        case Double: node->_data.dData = 0.0;    break;
    }

    return node;
}

////////////////////////////////////////////////////////////////////////////////

DataNode* DataNode::findNode( const char *path )
{
    std::string path_temp = path;

    stripPathDots( path_temp.c_str() );

    if ( path_temp.length() > 0 )
    {
        std::string pathLead;
        std::string pathRest;

        breakPath( path_temp.c_str(), pathLead, pathRest );

        DataNodes::iterator it;

        it = _children.find( pathLead );

        if ( it != _children.end() )
        {
            if ( pathRest.size() > 0 )
            {
                return it->second->findNode( pathRest.c_str() );
            }
            else
            {
                return it->second;
            }
        }
    }

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

std::string DataNode::stripPathDots( const char *path )
{
    std::string str( path );

    size_t pos;

    // removing leading dots
    pos = str.find( '.' );

    if ( pos != std::string::npos )
    {
        while ( pos == 0 )
        {
            str = str.substr( pos + 1 );
            pos = str.find( '.' );
        }
    }

    // removing trailing dots
    pos = str.rfind( '.' );

    if ( pos != std::string::npos )
    {
        while ( pos == str.length() - 1 )
        {
            str = str.substr( 0, pos );
            pos = str.rfind( '.' );
        }
    }

    return str;
}
