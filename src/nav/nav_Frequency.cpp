/****************************************************************************//*
 * Copyright (C) 2021 Marek M. Cel
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

#include <nav/nav_Frequency.h>

#include <fdm/utils/fdm_String.h>

////////////////////////////////////////////////////////////////////////////////

using namespace nav;

////////////////////////////////////////////////////////////////////////////////

int Frequency::getFreqDME( const char *chan )
{
    if ( 0 == fdm::String::icompare( chan, "001X" ) ) return 1025000;
    if ( 0 == fdm::String::icompare( chan, "001Y" ) ) return 1025000;
    if ( 0 == fdm::String::icompare( chan, "002X" ) ) return 1026000;
    if ( 0 == fdm::String::icompare( chan, "002Y" ) ) return 1026000;
    if ( 0 == fdm::String::icompare( chan, "003X" ) ) return 1027000;
    if ( 0 == fdm::String::icompare( chan, "003Y" ) ) return 1027000;
    if ( 0 == fdm::String::icompare( chan, "004X" ) ) return 1028000;
    if ( 0 == fdm::String::icompare( chan, "004Y" ) ) return 1028000;
    if ( 0 == fdm::String::icompare( chan, "005X" ) ) return 1029000;
    if ( 0 == fdm::String::icompare( chan, "005Y" ) ) return 1029000;
    if ( 0 == fdm::String::icompare( chan, "006X" ) ) return 1030000;
    if ( 0 == fdm::String::icompare( chan, "006Y" ) ) return 1030000;
    if ( 0 == fdm::String::icompare( chan, "007X" ) ) return 1031000;
    if ( 0 == fdm::String::icompare( chan, "007Y" ) ) return 1031000;
    if ( 0 == fdm::String::icompare( chan, "008X" ) ) return 1032000;
    if ( 0 == fdm::String::icompare( chan, "008Y" ) ) return 1032000;
    if ( 0 == fdm::String::icompare( chan, "009X" ) ) return 1033000;
    if ( 0 == fdm::String::icompare( chan, "009Y" ) ) return 1033000;
    if ( 0 == fdm::String::icompare( chan, "010X" ) ) return 1034000;
    if ( 0 == fdm::String::icompare( chan, "010Y" ) ) return 1034000;
    if ( 0 == fdm::String::icompare( chan, "011X" ) ) return 1035000;
    if ( 0 == fdm::String::icompare( chan, "011Y" ) ) return 1035000;
    if ( 0 == fdm::String::icompare( chan, "012X" ) ) return 1036000;
    if ( 0 == fdm::String::icompare( chan, "012Y" ) ) return 1036000;
    if ( 0 == fdm::String::icompare( chan, "013X" ) ) return 1037000;
    if ( 0 == fdm::String::icompare( chan, "013Y" ) ) return 1037000;
    if ( 0 == fdm::String::icompare( chan, "014X" ) ) return 1038000;
    if ( 0 == fdm::String::icompare( chan, "014Y" ) ) return 1038000;
    if ( 0 == fdm::String::icompare( chan, "015X" ) ) return 1039000;
    if ( 0 == fdm::String::icompare( chan, "015Y" ) ) return 1039000;
    if ( 0 == fdm::String::icompare( chan, "016X" ) ) return 1040000;
    if ( 0 == fdm::String::icompare( chan, "016Y" ) ) return 1040000;
    if ( 0 == fdm::String::icompare( chan, "017X" ) ) return 1041000;
    if ( 0 == fdm::String::icompare( chan, "017Y" ) ) return 1041000;
    if ( 0 == fdm::String::icompare( chan, "018X" ) ) return 1042000;
    if ( 0 == fdm::String::icompare( chan, "018Y" ) ) return 1042000;
    if ( 0 == fdm::String::icompare( chan, "019X" ) ) return 1043000;
    if ( 0 == fdm::String::icompare( chan, "019Y" ) ) return 1043000;
    if ( 0 == fdm::String::icompare( chan, "020X" ) ) return 1044000;
    if ( 0 == fdm::String::icompare( chan, "020Y" ) ) return 1044000;
    if ( 0 == fdm::String::icompare( chan, "021X" ) ) return 1045000;
    if ( 0 == fdm::String::icompare( chan, "021Y" ) ) return 1045000;
    if ( 0 == fdm::String::icompare( chan, "022X" ) ) return 1046000;
    if ( 0 == fdm::String::icompare( chan, "022Y" ) ) return 1046000;
    if ( 0 == fdm::String::icompare( chan, "023X" ) ) return 1047000;
    if ( 0 == fdm::String::icompare( chan, "023Y" ) ) return 1047000;
    if ( 0 == fdm::String::icompare( chan, "024X" ) ) return 1048000;
    if ( 0 == fdm::String::icompare( chan, "024Y" ) ) return 1048000;
    if ( 0 == fdm::String::icompare( chan, "025X" ) ) return 1049000;
    if ( 0 == fdm::String::icompare( chan, "025Y" ) ) return 1049000;
    if ( 0 == fdm::String::icompare( chan, "026X" ) ) return 1050000;
    if ( 0 == fdm::String::icompare( chan, "026Y" ) ) return 1050000;
    if ( 0 == fdm::String::icompare( chan, "027X" ) ) return 1051000;
    if ( 0 == fdm::String::icompare( chan, "027Y" ) ) return 1051000;
    if ( 0 == fdm::String::icompare( chan, "028X" ) ) return 1052000;
    if ( 0 == fdm::String::icompare( chan, "028Y" ) ) return 1052000;
    if ( 0 == fdm::String::icompare( chan, "029X" ) ) return 1053000;
    if ( 0 == fdm::String::icompare( chan, "029Y" ) ) return 1053000;
    if ( 0 == fdm::String::icompare( chan, "030X" ) ) return 1054000;
    if ( 0 == fdm::String::icompare( chan, "030Y" ) ) return 1054000;
    if ( 0 == fdm::String::icompare( chan, "031X" ) ) return 1055000;
    if ( 0 == fdm::String::icompare( chan, "031Y" ) ) return 1055000;
    if ( 0 == fdm::String::icompare( chan, "032X" ) ) return 1056000;
    if ( 0 == fdm::String::icompare( chan, "032Y" ) ) return 1056000;
    if ( 0 == fdm::String::icompare( chan, "033X" ) ) return 1057000;
    if ( 0 == fdm::String::icompare( chan, "033Y" ) ) return 1057000;
    if ( 0 == fdm::String::icompare( chan, "034X" ) ) return 1058000;
    if ( 0 == fdm::String::icompare( chan, "034Y" ) ) return 1058000;
    if ( 0 == fdm::String::icompare( chan, "035X" ) ) return 1059000;
    if ( 0 == fdm::String::icompare( chan, "035Y" ) ) return 1059000;
    if ( 0 == fdm::String::icompare( chan, "036X" ) ) return 1060000;
    if ( 0 == fdm::String::icompare( chan, "036Y" ) ) return 1060000;
    if ( 0 == fdm::String::icompare( chan, "037X" ) ) return 1061000;
    if ( 0 == fdm::String::icompare( chan, "037Y" ) ) return 1061000;
    if ( 0 == fdm::String::icompare( chan, "038X" ) ) return 1062000;
    if ( 0 == fdm::String::icompare( chan, "038Y" ) ) return 1062000;
    if ( 0 == fdm::String::icompare( chan, "039X" ) ) return 1063000;
    if ( 0 == fdm::String::icompare( chan, "039Y" ) ) return 1063000;
    if ( 0 == fdm::String::icompare( chan, "040X" ) ) return 1064000;
    if ( 0 == fdm::String::icompare( chan, "040Y" ) ) return 1064000;
    if ( 0 == fdm::String::icompare( chan, "041X" ) ) return 1065000;
    if ( 0 == fdm::String::icompare( chan, "041Y" ) ) return 1065000;
    if ( 0 == fdm::String::icompare( chan, "042X" ) ) return 1066000;
    if ( 0 == fdm::String::icompare( chan, "042Y" ) ) return 1066000;
    if ( 0 == fdm::String::icompare( chan, "043X" ) ) return 1067000;
    if ( 0 == fdm::String::icompare( chan, "043Y" ) ) return 1067000;
    if ( 0 == fdm::String::icompare( chan, "044X" ) ) return 1068000;
    if ( 0 == fdm::String::icompare( chan, "044Y" ) ) return 1068000;
    if ( 0 == fdm::String::icompare( chan, "045X" ) ) return 1069000;
    if ( 0 == fdm::String::icompare( chan, "045Y" ) ) return 1069000;
    if ( 0 == fdm::String::icompare( chan, "046X" ) ) return 1070000;
    if ( 0 == fdm::String::icompare( chan, "046Y" ) ) return 1070000;
    if ( 0 == fdm::String::icompare( chan, "047X" ) ) return 1071000;
    if ( 0 == fdm::String::icompare( chan, "047Y" ) ) return 1071000;
    if ( 0 == fdm::String::icompare( chan, "048X" ) ) return 1072000;
    if ( 0 == fdm::String::icompare( chan, "048Y" ) ) return 1072000;
    if ( 0 == fdm::String::icompare( chan, "049X" ) ) return 1073000;
    if ( 0 == fdm::String::icompare( chan, "049Y" ) ) return 1073000;
    if ( 0 == fdm::String::icompare( chan, "050X" ) ) return 1074000;
    if ( 0 == fdm::String::icompare( chan, "050Y" ) ) return 1074000;
    if ( 0 == fdm::String::icompare( chan, "051X" ) ) return 1075000;
    if ( 0 == fdm::String::icompare( chan, "051Y" ) ) return 1075000;
    if ( 0 == fdm::String::icompare( chan, "052X" ) ) return 1076000;
    if ( 0 == fdm::String::icompare( chan, "052Y" ) ) return 1076000;
    if ( 0 == fdm::String::icompare( chan, "053X" ) ) return 1077000;
    if ( 0 == fdm::String::icompare( chan, "053Y" ) ) return 1077000;
    if ( 0 == fdm::String::icompare( chan, "054X" ) ) return 1078000;
    if ( 0 == fdm::String::icompare( chan, "054Y" ) ) return 1078000;
    if ( 0 == fdm::String::icompare( chan, "055X" ) ) return 1079000;
    if ( 0 == fdm::String::icompare( chan, "055Y" ) ) return 1079000;
    if ( 0 == fdm::String::icompare( chan, "056X" ) ) return 1080000;
    if ( 0 == fdm::String::icompare( chan, "056Y" ) ) return 1080000;
    if ( 0 == fdm::String::icompare( chan, "057Y" ) ) return 1081000;
    if ( 0 == fdm::String::icompare( chan, "058X" ) ) return 1082000;
    if ( 0 == fdm::String::icompare( chan, "058Y" ) ) return 1082000;
    if ( 0 == fdm::String::icompare( chan, "059X" ) ) return 1083000;
    if ( 0 == fdm::String::icompare( chan, "059Y" ) ) return 1083000;
    if ( 0 == fdm::String::icompare( chan, "060X" ) ) return 1084000;
    if ( 0 == fdm::String::icompare( chan, "060Y" ) ) return 1084000;
    if ( 0 == fdm::String::icompare( chan, "061X" ) ) return 1085000;
    if ( 0 == fdm::String::icompare( chan, "061Y" ) ) return 1085000;
    if ( 0 == fdm::String::icompare( chan, "062X" ) ) return 1086000;
    if ( 0 == fdm::String::icompare( chan, "062Y" ) ) return 1086000;
    if ( 0 == fdm::String::icompare( chan, "063X" ) ) return 1087000;
    if ( 0 == fdm::String::icompare( chan, "063Y" ) ) return 1087000;
    if ( 0 == fdm::String::icompare( chan, "064X" ) ) return 1088000;
    if ( 0 == fdm::String::icompare( chan, "064Y" ) ) return 1088000;
    if ( 0 == fdm::String::icompare( chan, "065X" ) ) return 1089000;
    if ( 0 == fdm::String::icompare( chan, "065Y" ) ) return 1089000;
    if ( 0 == fdm::String::icompare( chan, "066X" ) ) return 1090000;
    if ( 0 == fdm::String::icompare( chan, "066Y" ) ) return 1090000;
    if ( 0 == fdm::String::icompare( chan, "067X" ) ) return 1091000;
    if ( 0 == fdm::String::icompare( chan, "067Y" ) ) return 1091000;
    if ( 0 == fdm::String::icompare( chan, "068X" ) ) return 1092000;
    if ( 0 == fdm::String::icompare( chan, "068Y" ) ) return 1092000;
    if ( 0 == fdm::String::icompare( chan, "069X" ) ) return 1093000;
    if ( 0 == fdm::String::icompare( chan, "069Y" ) ) return 1093000;
    if ( 0 == fdm::String::icompare( chan, "070X" ) ) return 1094000;
    if ( 0 == fdm::String::icompare( chan, "070Y" ) ) return 1094000;
    if ( 0 == fdm::String::icompare( chan, "071X" ) ) return 1095000;
    if ( 0 == fdm::String::icompare( chan, "071Y" ) ) return 1095000;
    if ( 0 == fdm::String::icompare( chan, "072X" ) ) return 1096000;
    if ( 0 == fdm::String::icompare( chan, "072Y" ) ) return 1096000;
    if ( 0 == fdm::String::icompare( chan, "073X" ) ) return 1097000;
    if ( 0 == fdm::String::icompare( chan, "073Y" ) ) return 1097000;
    if ( 0 == fdm::String::icompare( chan, "074X" ) ) return 1098000;
    if ( 0 == fdm::String::icompare( chan, "074Y" ) ) return 1098000;
    if ( 0 == fdm::String::icompare( chan, "075X" ) ) return 1099000;
    if ( 0 == fdm::String::icompare( chan, "075Y" ) ) return 1099000;
    if ( 0 == fdm::String::icompare( chan, "076X" ) ) return 1100000;
    if ( 0 == fdm::String::icompare( chan, "076Y" ) ) return 1100000;
    if ( 0 == fdm::String::icompare( chan, "077X" ) ) return 1101000;
    if ( 0 == fdm::String::icompare( chan, "077Y" ) ) return 1101000;
    if ( 0 == fdm::String::icompare( chan, "078X" ) ) return 1102000;
    if ( 0 == fdm::String::icompare( chan, "078Y" ) ) return 1102000;
    if ( 0 == fdm::String::icompare( chan, "079X" ) ) return 1103000;
    if ( 0 == fdm::String::icompare( chan, "079Y" ) ) return 1103000;
    if ( 0 == fdm::String::icompare( chan, "080X" ) ) return 1104000;
    if ( 0 == fdm::String::icompare( chan, "080Y" ) ) return 1104000;
    if ( 0 == fdm::String::icompare( chan, "081X" ) ) return 1105000;
    if ( 0 == fdm::String::icompare( chan, "081Y" ) ) return 1105000;
    if ( 0 == fdm::String::icompare( chan, "082X" ) ) return 1106000;
    if ( 0 == fdm::String::icompare( chan, "082Y" ) ) return 1106000;
    if ( 0 == fdm::String::icompare( chan, "083X" ) ) return 1107000;
    if ( 0 == fdm::String::icompare( chan, "083Y" ) ) return 1107000;
    if ( 0 == fdm::String::icompare( chan, "084X" ) ) return 1108000;
    if ( 0 == fdm::String::icompare( chan, "084Y" ) ) return 1108000;
    if ( 0 == fdm::String::icompare( chan, "085X" ) ) return 1109000;
    if ( 0 == fdm::String::icompare( chan, "085Y" ) ) return 1109000;
    if ( 0 == fdm::String::icompare( chan, "086X" ) ) return 1110000;
    if ( 0 == fdm::String::icompare( chan, "086Y" ) ) return 1110000;
    if ( 0 == fdm::String::icompare( chan, "087X" ) ) return 1111000;
    if ( 0 == fdm::String::icompare( chan, "087Y" ) ) return 1111000;
    if ( 0 == fdm::String::icompare( chan, "088X" ) ) return 1112000;
    if ( 0 == fdm::String::icompare( chan, "088Y" ) ) return 1112000;
    if ( 0 == fdm::String::icompare( chan, "089X" ) ) return 1113000;
    if ( 0 == fdm::String::icompare( chan, "089Y" ) ) return 1113000;
    if ( 0 == fdm::String::icompare( chan, "090X" ) ) return 1114000;
    if ( 0 == fdm::String::icompare( chan, "090Y" ) ) return 1114000;
    if ( 0 == fdm::String::icompare( chan, "091X" ) ) return 1115000;
    if ( 0 == fdm::String::icompare( chan, "091Y" ) ) return 1115000;
    if ( 0 == fdm::String::icompare( chan, "092X" ) ) return 1116000;
    if ( 0 == fdm::String::icompare( chan, "092Y" ) ) return 1116000;
    if ( 0 == fdm::String::icompare( chan, "093X" ) ) return 1117000;
    if ( 0 == fdm::String::icompare( chan, "093Y" ) ) return 1117000;
    if ( 0 == fdm::String::icompare( chan, "094X" ) ) return 1118000;
    if ( 0 == fdm::String::icompare( chan, "094Y" ) ) return 1118000;
    if ( 0 == fdm::String::icompare( chan, "095X" ) ) return 1119000;
    if ( 0 == fdm::String::icompare( chan, "095Y" ) ) return 1119000;
    if ( 0 == fdm::String::icompare( chan, "096X" ) ) return 1120000;
    if ( 0 == fdm::String::icompare( chan, "096Y" ) ) return 1120000;
    if ( 0 == fdm::String::icompare( chan, "097X" ) ) return 1121000;
    if ( 0 == fdm::String::icompare( chan, "097Y" ) ) return 1121000;
    if ( 0 == fdm::String::icompare( chan, "098X" ) ) return 1122000;
    if ( 0 == fdm::String::icompare( chan, "098Y" ) ) return 1122000;
    if ( 0 == fdm::String::icompare( chan, "099X" ) ) return 1123000;
    if ( 0 == fdm::String::icompare( chan, "099Y" ) ) return 1123000;
    if ( 0 == fdm::String::icompare( chan, "100X" ) ) return 1124000;
    if ( 0 == fdm::String::icompare( chan, "100Y" ) ) return 1124000;
    if ( 0 == fdm::String::icompare( chan, "101X" ) ) return 1125000;
    if ( 0 == fdm::String::icompare( chan, "101Y" ) ) return 1125000;
    if ( 0 == fdm::String::icompare( chan, "102X" ) ) return 1126000;
    if ( 0 == fdm::String::icompare( chan, "102Y" ) ) return 1126000;
    if ( 0 == fdm::String::icompare( chan, "103X" ) ) return 1127000;
    if ( 0 == fdm::String::icompare( chan, "103Y" ) ) return 1127000;
    if ( 0 == fdm::String::icompare( chan, "104X" ) ) return 1128000;
    if ( 0 == fdm::String::icompare( chan, "104Y" ) ) return 1128000;
    if ( 0 == fdm::String::icompare( chan, "105X" ) ) return 1129000;
    if ( 0 == fdm::String::icompare( chan, "105Y" ) ) return 1129000;
    if ( 0 == fdm::String::icompare( chan, "106X" ) ) return 1130000;
    if ( 0 == fdm::String::icompare( chan, "106Y" ) ) return 1130000;
    if ( 0 == fdm::String::icompare( chan, "107X" ) ) return 1131000;
    if ( 0 == fdm::String::icompare( chan, "107Y" ) ) return 1131000;
    if ( 0 == fdm::String::icompare( chan, "108X" ) ) return 1132000;
    if ( 0 == fdm::String::icompare( chan, "108Y" ) ) return 1132000;
    if ( 0 == fdm::String::icompare( chan, "109X" ) ) return 1133000;
    if ( 0 == fdm::String::icompare( chan, "109Y" ) ) return 1133000;
    if ( 0 == fdm::String::icompare( chan, "110X" ) ) return 1134000;
    if ( 0 == fdm::String::icompare( chan, "110Y" ) ) return 1134000;
    if ( 0 == fdm::String::icompare( chan, "111X" ) ) return 1135000;
    if ( 0 == fdm::String::icompare( chan, "111Y" ) ) return 1135000;
    if ( 0 == fdm::String::icompare( chan, "112X" ) ) return 1136000;
    if ( 0 == fdm::String::icompare( chan, "112Y" ) ) return 1136000;
    if ( 0 == fdm::String::icompare( chan, "113X" ) ) return 1137000;
    if ( 0 == fdm::String::icompare( chan, "113Y" ) ) return 1137000;
    if ( 0 == fdm::String::icompare( chan, "114X" ) ) return 1138000;
    if ( 0 == fdm::String::icompare( chan, "114Y" ) ) return 1138000;
    if ( 0 == fdm::String::icompare( chan, "115X" ) ) return 1139000;
    if ( 0 == fdm::String::icompare( chan, "115Y" ) ) return 1139000;
    if ( 0 == fdm::String::icompare( chan, "116X" ) ) return 1140000;
    if ( 0 == fdm::String::icompare( chan, "116Y" ) ) return 1140000;
    if ( 0 == fdm::String::icompare( chan, "117X" ) ) return 1141000;
    if ( 0 == fdm::String::icompare( chan, "117Y" ) ) return 1141000;
    if ( 0 == fdm::String::icompare( chan, "118X" ) ) return 1142000;
    if ( 0 == fdm::String::icompare( chan, "118Y" ) ) return 1142000;
    if ( 0 == fdm::String::icompare( chan, "119X" ) ) return 1143000;
    if ( 0 == fdm::String::icompare( chan, "119Y" ) ) return 1143000;
    if ( 0 == fdm::String::icompare( chan, "120X" ) ) return 1144000;
    if ( 0 == fdm::String::icompare( chan, "120Y" ) ) return 1144000;
    if ( 0 == fdm::String::icompare( chan, "121X" ) ) return 1145000;
    if ( 0 == fdm::String::icompare( chan, "121Y" ) ) return 1145000;
    if ( 0 == fdm::String::icompare( chan, "122X" ) ) return 1146000;
    if ( 0 == fdm::String::icompare( chan, "122Y" ) ) return 1146000;
    if ( 0 == fdm::String::icompare( chan, "123X" ) ) return 1147000;
    if ( 0 == fdm::String::icompare( chan, "123Y" ) ) return 1147000;
    if ( 0 == fdm::String::icompare( chan, "124X" ) ) return 1148000;
    if ( 0 == fdm::String::icompare( chan, "124Y" ) ) return 1148000;
    if ( 0 == fdm::String::icompare( chan, "125X" ) ) return 1149000;
    if ( 0 == fdm::String::icompare( chan, "125Y" ) ) return 1149000;
    if ( 0 == fdm::String::icompare( chan, "126X" ) ) return 1150000;
    if ( 0 == fdm::String::icompare( chan, "126Y" ) ) return 1150000;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

int Frequency::getFreqDME( int freq_ils )
{
    if ( freq_ils == 108000 ) return 1041000;
    if ( freq_ils == 108050 ) return 1041000;
    if ( freq_ils == 108100 ) return 1042000;
    if ( freq_ils == 108150 ) return 1042000;
    if ( freq_ils == 108200 ) return 1043000;
    if ( freq_ils == 108250 ) return 1043000;
    if ( freq_ils == 108300 ) return 1044000;
    if ( freq_ils == 108350 ) return 1044000;
    if ( freq_ils == 108400 ) return 1045000;
    if ( freq_ils == 108450 ) return 1045000;
    if ( freq_ils == 108500 ) return 1046000;
    if ( freq_ils == 108550 ) return 1046000;
    if ( freq_ils == 108600 ) return 1047000;
    if ( freq_ils == 108650 ) return 1047000;
    if ( freq_ils == 108700 ) return 1048000;
    if ( freq_ils == 108750 ) return 1048000;
    if ( freq_ils == 108800 ) return 1049000;
    if ( freq_ils == 108850 ) return 1049000;
    if ( freq_ils == 108900 ) return 1050000;
    if ( freq_ils == 108950 ) return 1050000;
    if ( freq_ils == 109000 ) return 1051000;
    if ( freq_ils == 109050 ) return 1051000;
    if ( freq_ils == 109100 ) return 1052000;
    if ( freq_ils == 109150 ) return 1052000;
    if ( freq_ils == 109200 ) return 1053000;
    if ( freq_ils == 109250 ) return 1053000;
    if ( freq_ils == 109300 ) return 1054000;
    if ( freq_ils == 109350 ) return 1054000;
    if ( freq_ils == 109400 ) return 1055000;
    if ( freq_ils == 109450 ) return 1055000;
    if ( freq_ils == 109500 ) return 1056000;
    if ( freq_ils == 109550 ) return 1056000;
    if ( freq_ils == 109600 ) return 1057000;
    if ( freq_ils == 109650 ) return 1057000;
    if ( freq_ils == 109700 ) return 1058000;
    if ( freq_ils == 109750 ) return 1058000;
    if ( freq_ils == 109800 ) return 1059000;
    if ( freq_ils == 109850 ) return 1059000;
    if ( freq_ils == 109900 ) return 1060000;
    if ( freq_ils == 109950 ) return 1060000;
    if ( freq_ils == 110000 ) return 1061000;
    if ( freq_ils == 110050 ) return 1061000;
    if ( freq_ils == 110100 ) return 1062000;
    if ( freq_ils == 110150 ) return 1062000;
    if ( freq_ils == 110200 ) return 1063000;
    if ( freq_ils == 110250 ) return 1063000;
    if ( freq_ils == 110300 ) return 1064000;
    if ( freq_ils == 110350 ) return 1064000;
    if ( freq_ils == 110400 ) return 1065000;
    if ( freq_ils == 110450 ) return 1065000;
    if ( freq_ils == 110500 ) return 1066000;
    if ( freq_ils == 110550 ) return 1066000;
    if ( freq_ils == 110600 ) return 1067000;
    if ( freq_ils == 110650 ) return 1067000;
    if ( freq_ils == 110700 ) return 1068000;
    if ( freq_ils == 110750 ) return 1068000;
    if ( freq_ils == 110800 ) return 1069000;
    if ( freq_ils == 110850 ) return 1069000;
    if ( freq_ils == 110900 ) return 1070000;
    if ( freq_ils == 110950 ) return 1070000;
    if ( freq_ils == 111000 ) return 1071000;
    if ( freq_ils == 111050 ) return 1071000;
    if ( freq_ils == 111100 ) return 1072000;
    if ( freq_ils == 111150 ) return 1072000;
    if ( freq_ils == 111200 ) return 1073000;
    if ( freq_ils == 111250 ) return 1073000;
    if ( freq_ils == 111300 ) return 1074000;
    if ( freq_ils == 111350 ) return 1074000;
    if ( freq_ils == 111400 ) return 1075000;
    if ( freq_ils == 111450 ) return 1075000;
    if ( freq_ils == 111500 ) return 1076000;
    if ( freq_ils == 111550 ) return 1076000;
    if ( freq_ils == 111600 ) return 1077000;
    if ( freq_ils == 111650 ) return 1077000;
    if ( freq_ils == 111700 ) return 1078000;
    if ( freq_ils == 111750 ) return 1078000;
    if ( freq_ils == 111800 ) return 1079000;
    if ( freq_ils == 111850 ) return 1079000;
    if ( freq_ils == 111900 ) return 1080000;
    if ( freq_ils == 111950 ) return 1080000;
    if ( freq_ils == 112050 ) return 1081000;
    if ( freq_ils == 112100 ) return 1082000;
    if ( freq_ils == 112150 ) return 1082000;
    if ( freq_ils == 112200 ) return 1083000;
    if ( freq_ils == 112250 ) return 1083000;
    if ( freq_ils == 112300 ) return 1094000;
    if ( freq_ils == 112350 ) return 1094000;
    if ( freq_ils == 112400 ) return 1095000;
    if ( freq_ils == 112450 ) return 1095000;
    if ( freq_ils == 112500 ) return 1096000;
    if ( freq_ils == 112550 ) return 1096000;
    if ( freq_ils == 112600 ) return 1097000;
    if ( freq_ils == 112650 ) return 1097000;
    if ( freq_ils == 112700 ) return 1098000;
    if ( freq_ils == 112750 ) return 1098000;
    if ( freq_ils == 112800 ) return 1099000;
    if ( freq_ils == 112850 ) return 1099000;
    if ( freq_ils == 112900 ) return 1100000;
    if ( freq_ils == 112950 ) return 1100000;
    if ( freq_ils == 113000 ) return 1101000;
    if ( freq_ils == 113050 ) return 1101000;
    if ( freq_ils == 113100 ) return 1102000;
    if ( freq_ils == 113150 ) return 1102000;
    if ( freq_ils == 113200 ) return 1103000;
    if ( freq_ils == 113250 ) return 1103000;
    if ( freq_ils == 113300 ) return 1104000;
    if ( freq_ils == 113350 ) return 1104000;
    if ( freq_ils == 113400 ) return 1105000;
    if ( freq_ils == 113450 ) return 1105000;
    if ( freq_ils == 113500 ) return 1106000;
    if ( freq_ils == 113550 ) return 1106000;
    if ( freq_ils == 113600 ) return 1107000;
    if ( freq_ils == 113650 ) return 1107000;
    if ( freq_ils == 113700 ) return 1108000;
    if ( freq_ils == 113750 ) return 1108000;
    if ( freq_ils == 113800 ) return 1109000;
    if ( freq_ils == 113850 ) return 1109000;
    if ( freq_ils == 113900 ) return 1110000;
    if ( freq_ils == 113950 ) return 1110000;
    if ( freq_ils == 114000 ) return 1111000;
    if ( freq_ils == 114050 ) return 1111000;
    if ( freq_ils == 114100 ) return 1112000;
    if ( freq_ils == 114150 ) return 1112000;
    if ( freq_ils == 114200 ) return 1113000;
    if ( freq_ils == 114250 ) return 1113000;
    if ( freq_ils == 114300 ) return 1114000;
    if ( freq_ils == 114350 ) return 1114000;
    if ( freq_ils == 114400 ) return 1115000;
    if ( freq_ils == 114450 ) return 1115000;
    if ( freq_ils == 114500 ) return 1116000;
    if ( freq_ils == 114550 ) return 1116000;
    if ( freq_ils == 114600 ) return 1117000;
    if ( freq_ils == 114650 ) return 1117000;
    if ( freq_ils == 114700 ) return 1118000;
    if ( freq_ils == 114750 ) return 1118000;
    if ( freq_ils == 114800 ) return 1119000;
    if ( freq_ils == 114850 ) return 1119000;
    if ( freq_ils == 114900 ) return 1120000;
    if ( freq_ils == 114950 ) return 1120000;
    if ( freq_ils == 115000 ) return 1121000;
    if ( freq_ils == 115050 ) return 1121000;
    if ( freq_ils == 115100 ) return 1122000;
    if ( freq_ils == 115150 ) return 1122000;
    if ( freq_ils == 115200 ) return 1123000;
    if ( freq_ils == 115250 ) return 1123000;
    if ( freq_ils == 115300 ) return 1124000;
    if ( freq_ils == 115350 ) return 1124000;
    if ( freq_ils == 115400 ) return 1125000;
    if ( freq_ils == 115450 ) return 1125000;
    if ( freq_ils == 115500 ) return 1126000;
    if ( freq_ils == 115550 ) return 1126000;
    if ( freq_ils == 115600 ) return 1127000;
    if ( freq_ils == 115650 ) return 1127000;
    if ( freq_ils == 115700 ) return 1128000;
    if ( freq_ils == 115750 ) return 1128000;
    if ( freq_ils == 115800 ) return 1129000;
    if ( freq_ils == 115850 ) return 1129000;
    if ( freq_ils == 115900 ) return 1130000;
    if ( freq_ils == 115950 ) return 1130000;
    if ( freq_ils == 116000 ) return 1131000;
    if ( freq_ils == 116050 ) return 1131000;
    if ( freq_ils == 116100 ) return 1132000;
    if ( freq_ils == 116150 ) return 1132000;
    if ( freq_ils == 116200 ) return 1133000;
    if ( freq_ils == 116250 ) return 1133000;
    if ( freq_ils == 116300 ) return 1134000;
    if ( freq_ils == 116350 ) return 1134000;
    if ( freq_ils == 116400 ) return 1135000;
    if ( freq_ils == 116450 ) return 1135000;
    if ( freq_ils == 116500 ) return 1136000;
    if ( freq_ils == 116550 ) return 1136000;
    if ( freq_ils == 116600 ) return 1137000;
    if ( freq_ils == 116650 ) return 1137000;
    if ( freq_ils == 116700 ) return 1138000;
    if ( freq_ils == 116750 ) return 1138000;
    if ( freq_ils == 116800 ) return 1139000;
    if ( freq_ils == 116850 ) return 1139000;
    if ( freq_ils == 116900 ) return 1140000;
    if ( freq_ils == 116950 ) return 1140000;
    if ( freq_ils == 117000 ) return 1141000;
    if ( freq_ils == 117050 ) return 1141000;
    if ( freq_ils == 117100 ) return 1142000;
    if ( freq_ils == 117150 ) return 1142000;
    if ( freq_ils == 117200 ) return 1143000;
    if ( freq_ils == 117250 ) return 1143000;
    if ( freq_ils == 117300 ) return 1144000;
    if ( freq_ils == 117350 ) return 1144000;
    if ( freq_ils == 117400 ) return 1145000;
    if ( freq_ils == 117450 ) return 1145000;
    if ( freq_ils == 117500 ) return 1146000;
    if ( freq_ils == 117550 ) return 1146000;
    if ( freq_ils == 117600 ) return 1147000;
    if ( freq_ils == 117650 ) return 1147000;
    if ( freq_ils == 117700 ) return 1148000;
    if ( freq_ils == 117750 ) return 1148000;
    if ( freq_ils == 117800 ) return 1149000;
    if ( freq_ils == 117850 ) return 1149000;
    if ( freq_ils == 117900 ) return 1150000;
    if ( freq_ils == 117950 ) return 1150000;

    return 0;
}

////////////////////////////////////////////////////////////////////////////////

int Frequency::getFreqGS( int freq_ils )
{
    if ( freq_ils == 108100 ) return 334700;
    if ( freq_ils == 108150 ) return 334550;
    if ( freq_ils == 108300 ) return 334100;
    if ( freq_ils == 108350 ) return 333950;
    if ( freq_ils == 108500 ) return 329900;
    if ( freq_ils == 108550 ) return 329750;
    if ( freq_ils == 108700 ) return 330500;
    if ( freq_ils == 108750 ) return 330350;
    if ( freq_ils == 108900 ) return 329300;
    if ( freq_ils == 108950 ) return 329150;
    if ( freq_ils == 109100 ) return 331400;
    if ( freq_ils == 109150 ) return 331250;
    if ( freq_ils == 109300 ) return 332000;
    if ( freq_ils == 109350 ) return 331850;
    if ( freq_ils == 109500 ) return 332600;
    if ( freq_ils == 109550 ) return 332450;
    if ( freq_ils == 109700 ) return 333200;
    if ( freq_ils == 109750 ) return 333050;
    if ( freq_ils == 109900 ) return 333800;
    if ( freq_ils == 109950 ) return 333650;
    if ( freq_ils == 110100 ) return 334400;
    if ( freq_ils == 110150 ) return 334250;
    if ( freq_ils == 110300 ) return 335000;
    if ( freq_ils == 110350 ) return 334850;
    if ( freq_ils == 110500 ) return 329600;
    if ( freq_ils == 110550 ) return 329450;
    if ( freq_ils == 110700 ) return 330200;
    if ( freq_ils == 110750 ) return 330050;
    if ( freq_ils == 110900 ) return 330800;
    if ( freq_ils == 110950 ) return 330650;
    if ( freq_ils == 111100 ) return 331700;
    if ( freq_ils == 111150 ) return 331550;
    if ( freq_ils == 111300 ) return 332300;
    if ( freq_ils == 111350 ) return 332150;
    if ( freq_ils == 111500 ) return 332900;
    if ( freq_ils == 111550 ) return 332750;
    if ( freq_ils == 111700 ) return 333500;
    if ( freq_ils == 111750 ) return 333350;
    if ( freq_ils == 111900 ) return 331100;
    if ( freq_ils == 111950 ) return 330950;

    return 0;
}
