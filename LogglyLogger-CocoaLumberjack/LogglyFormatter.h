//
// Created by Mats Melke on 2014-02-18.
//

#import <Foundation/Foundation.h>
#import <CocoaLumberjack/CocoaLumberjack.h>


@protocol LogglyFieldsDelegate
- (NSDictionary *)logglyFieldsToIncludeInEveryLogStatement;
@end

@interface LogglyFormatter : NSObject <DDLogFormatter>
@property (nonatomic, assign) BOOL alwaysIncludeRawMessage;
- (id)initWithLogglyFieldsDelegate:(id<LogglyFieldsDelegate>)delegate;
@property (nonatomic, assign) DDLogLevel logLevel;
- (BOOL) updateLogfields:(NSMutableDictionary*) logfields withMessage:(DDLogMessage *)logMessage;
@end
