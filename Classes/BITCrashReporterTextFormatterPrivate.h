//
//  BITCrashReportTextFormatterPrivate.h
//  HockeySDK
//
//  Created by Lukas Spieß on 27/01/16.
//
//

#import "BITCrashReporterTextFormatter.h"

#ifndef BITCrashReportTextFormatterPrivate_h
#define BITCrashReportTextFormatterPrivate_h

@interface BITCrashReportTextFormatter ()

+ (NSString *)anonymizedProcessPathFromProcessPath:(NSString *)processPath;

@end

#endif /* BITCrashReportTextFormatterPrivate_h */