//
//  UnitTestContent.h
//  CHCSVParser
//
//  Created by Dave DeLong on 5/5/13.
//
//

#define COMMA @","
#define SEMICOLON @";"
#define DOUBLEQUOTE @"\""
#define NEWLINE @"\n"
#define SPACE @" "
#define BACKSLASH @"\\"

#define FIELD1 @"field1"
#define FIELD2 @"field2"
#define FIELD3 @"field3"

#define QUOTED_FIELD1 DOUBLEQUOTE FIELD1 DOUBLEQUOTE
#define QUOTED_FIELD2 DOUBLEQUOTE FIELD2 DOUBLEQUOTE
#define QUOTED_FIELD3 DOUBLEQUOTE FIELD3 DOUBLEQUOTE

#define MULTILINE_FIELD DOUBLEQUOTE FIELD1 NEWLINE FIELD2 DOUBLEQUOTE
#define COMMAED_FIELD DOUBLEQUOTE FIELD1 COMMA FIELD2 DOUBLEQUOTE
#define FIELD_WITH_QUOTES FIELD1 DOUBLEQUOTE DOUBLEQUOTE FIELD2
#define QUOTED_FIELD_WITH_QUOTES DOUBLEQUOTE FIELD1 DOUBLEQUOTE DOUBLEQUOTE FIELD2 DOUBLQUOTE