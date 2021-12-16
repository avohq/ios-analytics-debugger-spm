// Generated by Avo VERSION 56.1.0, PLEASE EDIT WITH CARE

#import <UIKit/UIKit.h>

#ifndef DebuggerAnalytics_h
#define DebuggerAnalytics_h

typedef NS_ENUM(NSInteger, DebuggerAnalyticsAVOEnv) {
  AVOEnvProd = 0,
  AVOEnvDev = 1,
};

@protocol DebuggerAnalyticsCustomDestination

- (void)make:(DebuggerAnalyticsAVOEnv)avoEnv;

- (void)logEvent:(nonnull NSString*)eventName withEventProperties:(nonnull NSDictionary*)eventProperties;

- (void)setUserProperties:(nonnull NSString*)userId withUserProperties:(nonnull NSDictionary*)userProperties;

- (void)identify:(nonnull NSString*)userId;

- (void)unidentify;

@end

@interface DebuggerAnalytics : NSObject

+ (void)initAvoWithEnv:(DebuggerAnalyticsAVOEnv)env
  version:(nullable NSString *)version
  customNodeJsDestination:(nonnull id<DebuggerAnalyticsCustomDestination>)customNodeJsDestination;

+ (void)initAvoWithEnv:(DebuggerAnalyticsAVOEnv)env
  version:(nullable NSString *)version
  customNodeJsDestination:(nonnull id<DebuggerAnalyticsCustomDestination>)customNodeJsDestination
  strict:(BOOL)strict;

+ (void)initAvoWithEnv:(DebuggerAnalyticsAVOEnv)env
  version:(nullable NSString *)version
  customNodeJsDestination:(nonnull id<DebuggerAnalyticsCustomDestination>)customNodeJsDestination
  debugger:(nonnull NSObject *)debugger;

+ (void)initAvoWithEnv:(DebuggerAnalyticsAVOEnv)env
  version:(nullable NSString *)version
  customNodeJsDestination:(nonnull id<DebuggerAnalyticsCustomDestination>)customNodeJsDestination
  strict:(BOOL)strict
  debugger:(nonnull NSObject *)debugger;

+ (void)setSystemPropertiesWithVersion:(nullable NSString *)version;

/**
 * Debugger Started: Sent when the web debugger is started.
 * 
 * @param frameLocation Describes from where the debugger was started.
 * @param schemaId The ID of the schema that this event is related to.
 *
 * @see <a href="https://www.avo.app/schemas/fwtXqAc0fCLy7b7oGW40/branches/LowQacyet/events/Od3PNKHK1">Debugger Started</a>
 */
+ (void)debuggerStartedWithFrameLocation:(nullable NSString *)frameLocation
  schemaId:(nonnull NSString *)schemaId;

@end

#endif