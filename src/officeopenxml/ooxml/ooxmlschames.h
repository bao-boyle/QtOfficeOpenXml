/****************************************************************************
**
** Copyright (C) 2014-2015 Debao Zhang <hello@debao.me>
**
** This file is part of the QtOfficeOpenXml library.
**
** GNU Lesser General Public License Usage
** This file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPLv2 included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
****************************************************************************/
#ifndef QTOFFICEOPENXML_NAMESPACEIDMAP_H
#define QTOFFICEOPENXML_NAMESPACEIDMAP_H

#include <QtOfficeOpenXml/officeopenxmlglobal.h>

class QString;

namespace QtOfficeOpenXml {
namespace Ooxml {

enum SchameType
{
    UnknownSchame,
    TransitionalSchame,
    StrictSchame
};

enum NamespaceId
{
    NS_Descriptions_Base,
    NS_Descriptions_Full,
    NS_Drawingml_Chart,
    NS_Drawingml_ChartDrawing,
    NS_Drawingml_Diagram,
    NS_Drawingml_Main,
    NS_Drawingml_Picture,
    NS_Drawingml_SpreadsheetDrawing,
    NS_Drawingml_WordprocessingDrawing,
    NS_Drawingml_LockedCanvas,
    NS_Drawingml_Compatibility,
    NS_OfficeDocument_Bibliography,
    NS_OfficeDocument_CustomProperties,
    NS_OfficeDocument_CustomXml,
    NS_OfficeDocument_CustomXmlDataProps,
    NS_OfficeDocument_DocPropsVTypes,
    NS_OfficeDocument_ExtendedProperties,
    NS_OfficeDocument_Math,
    NS_OfficeDocument_Relationships,
    NS_OfficeDocument_SharedTypes,
    NS_Presentationml_Main,
    NS_SchemaLibrary_Main,
    NS_Spreadsheetml_Main,
    NS_Wordprocessingml_Main,

    NS_Package_CoreProperties,

    NS_Dc_Dcmitype,
    NS_Dc_Elements,
    NS_Dc_Terms,
    NS_Xml,
    NS_XmlSchema,
    NS_XmlSchemaInstance
};

enum RelationshipId
{
    RS_OfficeDocument_AFChunk,
    RS_OfficeDocument_AttachedTemplate,
    RS_OfficeDocument_Audio,
    RS_OfficeDocument_CalcChain,
    RS_OfficeDocument_Chart,
    RS_OfficeDocument_Chartsheet,
    RS_OfficeDocument_ChartUserShapes,
    RS_OfficeDocument_CommentAuthors,
    RS_OfficeDocument_Comments,
    RS_OfficeDocument_Connections,
    RS_OfficeDocument_Control,
    RS_OfficeDocument_CustomProperties,
    RS_OfficeDocument_CustomProperty,
    RS_OfficeDocument_CustomXml,
    RS_OfficeDocument_CustomXmlProps,
    RS_OfficeDocument_DiagramColoros,
    RS_OfficeDocument_DiagramData,
    RS_OfficeDocument_DiagramLayout,
    RS_OfficeDocument_DiagramQuickStyle,
    RS_OfficeDocument_Dialogsheet,
    RS_OfficeDocument_Drawing,
    RS_OfficeDocument_Endnotes,
    RS_OfficeDocument_Extended,
    RS_OfficeDocument_ExternalLink,
    RS_OfficeDocument_ExternalLinkPath,
    RS_OfficeDocument_Font,
    RS_OfficeDocument_FontTable,
    RS_OfficeDocument_Footer,
    RS_OfficeDocument_Footnotes,
    RS_OfficeDocument_Frame,
    RS_OfficeDocument_GlossaryDocument,
    RS_OfficeDocument_HandoutMaster,
    RS_OfficeDocument_Header,
    RS_OfficeDocument_HtmlPubSaveAs,
    RS_OfficeDocument_Hyperlink,
    RS_OfficeDocument_Image,
    RS_OfficeDocument_MailMergeHeaderSource,
    RS_OfficeDocument_MailMergeRecipientData,
    RS_OfficeDocument_MailMergeSource,
    RS_OfficeDocument_Metadata,
    RS_OfficeDocument_Movie,
    RS_OfficeDocument_NotesMaster,
    RS_OfficeDocument_NotesSlide,
    RS_OfficeDocument_Numbering,
    RS_OfficeDocument_OfficeDocument,
    RS_OfficeDocument_OleObject,
    RS_OfficeDocument_Package,
    RS_OfficeDocument_PivotCacheDefinition,
    RS_OfficeDocument_PivotCacheRecords,
    RS_OfficeDocument_PivotTable,
    RS_OfficeDocument_PresProps,
    RS_OfficeDocument_PrinterSettings,
    RS_OfficeDocument_QueryTable,
    RS_OfficeDocument_RevisionHeaders,
    RS_OfficeDocument_RevisionLog,
    RS_OfficeDocument_Settings,
    RS_OfficeDocument_SharedStrings,
    RS_OfficeDocument_SheetMetadata,
    RS_OfficeDocument_Slide,
    RS_OfficeDocument_SlideLayout,
    RS_OfficeDocument_SlideMaster,
    RS_OfficeDocument_SlideUpdateInfo,
    RS_OfficeDocument_SlideUpdateUrl,
    RS_OfficeDocument_Styles,
    RS_OfficeDocument_SubDocument,
    RS_OfficeDocument_Table,
    RS_OfficeDocument_TableSingleCells,
    RS_OfficeDocument_TableStyles,
    RS_OfficeDocument_Tags,
    RS_OfficeDocument_Theme,
    RS_OfficeDocument_ThemeOverride,
    RS_OfficeDocument_Transform,
    RS_OfficeDocument_Usernames,
    RS_OfficeDocument_Video,
    RS_OfficeDocument_ViewProps,
    RS_OfficeDocument_VolatileDependencies,
    RS_OfficeDocument_WebSettings,
    RS_OfficeDocument_Worksheet,
    RS_OfficeDocument_XmlMaps,

    RS_Package_CoreProperties,
    RS_Package_Thumbnail,
    RS_Package_DigitalSignatureOrigin,
    RS_Package_DigitalSignature
};

class SchamesPrivate;
class Q_OFFICEOPENXML_EXPORT Schames
{
public:
    Schames();
    ~Schames();

    static QString namespaceUri(NamespaceId id, SchameType type = TransitionalSchame);
    static QString namespaceUri(const QString &uri, SchameType type = TransitionalSchame);
    static QString namespacePrefix(NamespaceId id);
    static QString namespacePrefix(const QString &uri);
    static SchameType namespaceSchameType(const QString &uri);

    static QString relationshipUri(RelationshipId id, SchameType type = TransitionalSchame);
    static QString relationshipUri(const QString &uri, SchameType type = TransitionalSchame);
    static SchameType relationshipSchameType(const QString &uri);

private:
    static SchamesPrivate *d();
};
} // namespace Ooxml
} // namespace QtOfficeOpenXml

#endif // QTOFFICEOPENXML_NAMESPACEIDMAP_H
