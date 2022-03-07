#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UnflowUnflowEvent, UnflowUnflowEventCompanion, UnflowUnflowEventActionInteraction, UnflowUnflowEventAction, UnflowKotlinEnumCompanion, UnflowKotlinEnum<E>, UnflowKotlinArray<T>, UnflowUnflowEventScreen, UnflowKotlinPair<__covariant A, __covariant B>, UnflowUnflowSdk, UnflowUnflowSdkConfig, UnflowDatabaseDriverFactory, UnflowSettingsFactory, UnflowEvent, UnflowKotlinUnit, UnflowUnflowComponent, UnflowLink, UnflowLinkActionCompanion, UnflowLinkAction, UnflowLinkActionClose, UnflowLinkLinkIdCompanion, UnflowLinkLinkId, UnflowLinkNavigable, UnflowLinkNavigableHttp, UnflowLinkNavigableOther, UnflowLinkShareCompanion, UnflowLinkShare, UnflowAppStyle, UnflowCommonFlow<T>, UnflowAppMetadata, UnflowOpener, UnflowScreen, UnflowBlock, UnflowTheme, UnflowBlockAuthor, UnflowBlockButtonStyle, UnflowBlockButton, UnflowBlockButtonStyleCompanion, UnflowBlockImage, UnflowBlockRatingStyle, UnflowBlockRating, UnflowBlockRatingStyleCompanion, UnflowBlockSpacer, UnflowBlockTextStyle, UnflowHorizontalAlignment, UnflowBlockText, UnflowBlockTextStyleCompanion, UnflowBlockVideo, UnflowBlockTypeCompanion, UnflowBlockType, UnflowHorizontalAlignmentCompanion, UnflowImage, UnflowSlot, UnflowPage, UnflowScreenContentType, UnflowScreenLayout, UnflowScreenPresentationStyle, UnflowScreenContentTypeCompanion, UnflowScreenLayoutCompanion, UnflowScreenPresentationStyleCompanion, UnflowAppStyleThemePalette, UnflowThemeCompanion, UnflowAppMetadata_, UnflowRuntimeQuery<__covariant RowType>, UnflowAppStyle_, UnflowTheme_, UnflowBlock_, UnflowRuntimeAfterVersionWithDriver, UnflowImage_, UnflowLink_, UnflowOpener_, UnflowPage_, UnflowPendingScreen, UnflowScreen_, UnflowSlot_, UnflowUnflowDatabaseCompanion, UnflowKotlinThrowable, UnflowKotlinException, UnflowKotlinRuntimeException, UnflowKotlinIllegalStateException, UnflowRuntimeTransacterTransaction, UnflowKotlinByteArray, UnflowKotlinByteIterator;

@protocol UnflowKotlinComparable, UnflowAnalyticsListener, UnflowAnalytics, UnflowAnalyticsLocalDataSource, UnflowEventRepository, UnflowUnflowRepository, UnflowKotlinx_coroutines_coreFlowCollector, UnflowKotlinx_coroutines_coreFlow, UnflowKtor_ioCloseable, UnflowAlignment, UnflowKotlinKClass, UnflowMultiplatform_settings_coroutinesFlowSettings, UnflowRuntimeTransactionWithoutReturn, UnflowRuntimeTransactionWithReturn, UnflowRuntimeTransacter, UnflowRuntimeSqlDriver, UnflowAppMetadataQueries, UnflowAppStyleQueries, UnflowLinkQueries, UnflowScreenQueries, UnflowTriggerQueries, UnflowUnflowDatabase, UnflowRuntimeSqlDriverSchema, UnflowGenericStorage, UnflowKotlinIterator, UnflowKotlinKDeclarationContainer, UnflowKotlinKAnnotatedElement, UnflowKotlinKClassifier, UnflowMultiplatform_settings_coroutinesSuspendSettings, UnflowRuntimeSqlCursor, UnflowRuntimeQueryListener, UnflowRuntimeTransactionCallbacks, UnflowRuntimeSqlPreparedStatement, UnflowRuntimeCloseable;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface UnflowBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface UnflowBase (UnflowBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface UnflowMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface UnflowMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorUnflowKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface UnflowNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface UnflowByte : UnflowNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface UnflowUByte : UnflowNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface UnflowShort : UnflowNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface UnflowUShort : UnflowNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface UnflowInt : UnflowNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface UnflowUInt : UnflowNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface UnflowLong : UnflowNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface UnflowULong : UnflowNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface UnflowFloat : UnflowNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface UnflowDouble : UnflowNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface UnflowBoolean : UnflowNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("AnalyticsListener")))
@protocol UnflowAnalyticsListener
@required
- (void)onEventEvent:(UnflowUnflowEvent *)event __attribute__((swift_name("onEvent(event:)")));
@end;

__attribute__((swift_name("UnflowEvent")))
@interface UnflowUnflowEvent : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowUnflowEventCompanion *companion __attribute__((swift_name("companion")));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Action")))
@interface UnflowUnflowEventAction : UnflowUnflowEvent
- (instancetype)initWithName:(NSString *)name interaction:(UnflowUnflowEventActionInteraction *)interaction attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(name:interaction:attributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowUnflowEventActionInteraction *)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (UnflowUnflowEventAction *)doCopyName:(NSString *)name interaction:(UnflowUnflowEventActionInteraction *)interaction attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(name:interaction:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowUnflowEventActionInteraction *interaction __attribute__((swift_name("interaction")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol UnflowKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface UnflowKotlinEnum<E> : UnflowBase <UnflowKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.ActionInteraction")))
@interface UnflowUnflowEventActionInteraction : UnflowKotlinEnum<UnflowUnflowEventActionInteraction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowUnflowEventActionInteraction *tap __attribute__((swift_name("tap")));
@property (class, readonly) UnflowUnflowEventActionInteraction *swipe __attribute__((swift_name("swipe")));
+ (UnflowKotlinArray<UnflowUnflowEventActionInteraction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Companion")))
@interface UnflowUnflowEventCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowUnflowEventCompanion *shared __attribute__((swift_name("shared")));
- (UnflowUnflowEventScreen *)screenName:(NSString *)name screenId:(int64_t)screenId parameters:(UnflowKotlinArray<UnflowKotlinPair<NSString *, id> *> *)parameters __attribute__((swift_name("screen(name:screenId:parameters:)")));
- (UnflowUnflowEventAction *)tapName:(NSString *)name parameters:(UnflowKotlinArray<UnflowKotlinPair<NSString *, id> *> *)parameters __attribute__((swift_name("tap(name:parameters:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent.Screen")))
@interface UnflowUnflowEventScreen : UnflowUnflowEvent
- (instancetype)initWithName:(NSString *)name screenId:(int64_t)screenId attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("init(name:screenId:attributes:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSDictionary<NSString *, id> *)allAttributes __attribute__((swift_name("allAttributes()")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSDictionary<NSString *, id> *)component3 __attribute__((swift_name("component3()")));
- (UnflowUnflowEventScreen *)doCopyName:(NSString *)name screenId:(int64_t)screenId attributes:(NSDictionary<NSString *, id> *)attributes __attribute__((swift_name("doCopy(name:screenId:attributes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSDictionary<NSString *, id> *attributes __attribute__((swift_name("attributes")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int64_t screenId __attribute__((swift_name("screenId")));
@property (readonly) NSString *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowSdk")))
@interface UnflowUnflowSdk : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unflowSdk __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowUnflowSdk *shared __attribute__((swift_name("shared")));
- (void)setupConfig:(UnflowUnflowSdkConfig *)config databaseDriverFactory:(UnflowDatabaseDriverFactory *)databaseDriverFactory settingsFactory:(UnflowSettingsFactory *)settingsFactory analyticsListener:(id<UnflowAnalyticsListener> _Nullable)analyticsListener __attribute__((swift_name("setup(config:databaseDriverFactory:settingsFactory:analyticsListener:)")));
@property (readonly) NSString *SUBSCRIPTION_ID_DEFAULT __attribute__((swift_name("SUBSCRIPTION_ID_DEFAULT")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowSdk.Config")))
@interface UnflowUnflowSdkConfig : UnflowBase
- (instancetype)initWithApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("init(apiKey:enableLogging:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (UnflowUnflowSdkConfig *)doCopyApiKey:(NSString *)apiKey enableLogging:(BOOL)enableLogging __attribute__((swift_name("doCopy(apiKey:enableLogging:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) BOOL enableLogging __attribute__((swift_name("enableLogging")));
@end;

__attribute__((swift_name("EventRepository")))
@protocol UnflowEventRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)trackEventEvent:(UnflowEvent *)event completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trackEvent(event:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)trackScreenEventKey:(NSString *)key screenId:(int64_t)screenId metadata:(NSDictionary<NSString *, id> *)metadata completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trackScreenEvent(key:screenId:metadata:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Event")))
@interface UnflowEvent : UnflowBase
- (instancetype)initWithKey:(NSString *)key metadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("init(key:metadata:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSDictionary<NSString *, id> *)component2 __attribute__((swift_name("component2()")));
- (UnflowEvent *)doCopyKey:(NSString *)key metadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("doCopy(key:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) NSDictionary<NSString *, id> *metadata __attribute__((swift_name("metadata")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowComponent")))
@interface UnflowUnflowComponent : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unflowComponent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowUnflowComponent *shared __attribute__((swift_name("shared")));
@property (readonly) id<UnflowAnalytics> analytics __attribute__((swift_name("analytics")));
@property (readonly) id<UnflowAnalyticsLocalDataSource> analyticsStorage __attribute__((swift_name("analyticsStorage")));
@property (readonly) id<UnflowEventRepository> eventRepository __attribute__((swift_name("eventRepository")));
@property (readonly) id<UnflowUnflowRepository> unflowRepository __attribute__((swift_name("unflowRepository")));
@end;

__attribute__((swift_name("Link")))
@interface UnflowLink : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Action")))
@interface UnflowLinkAction : UnflowLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowLinkActionCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionClose")))
@interface UnflowLinkActionClose : UnflowLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (instancetype)close __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowLinkActionClose *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionCompanion")))
@interface UnflowLinkActionCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowLinkActionCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.LinkId")))
@interface UnflowLinkLinkId : UnflowLink
- (instancetype)initWithUri:(NSString *)uri linkId:(int64_t)linkId __attribute__((swift_name("init(uri:linkId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowLinkLinkIdCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (UnflowLinkLinkId *)doCopyUri:(NSString *)uri linkId:(int64_t)linkId __attribute__((swift_name("doCopy(uri:linkId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t linkId __attribute__((swift_name("linkId")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.LinkIdCompanion")))
@interface UnflowLinkLinkIdCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowLinkLinkIdCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Link.Navigable")))
@interface UnflowLinkNavigable : UnflowLink
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableHttp")))
@interface UnflowLinkNavigableHttp : UnflowLinkNavigable
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowLinkNavigableHttp *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableOther")))
@interface UnflowLinkNavigableOther : UnflowLinkNavigable
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowLinkNavigableOther *)doCopyUri:(NSString *)uri __attribute__((swift_name("doCopy(uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.Share")))
@interface UnflowLinkShare : UnflowLink
- (instancetype)initWithUri:(NSString *)uri shareUrl:(NSString *)shareUrl __attribute__((swift_name("init(uri:shareUrl:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowLinkShareCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowLinkShare *)doCopyUri:(NSString *)uri shareUrl:(NSString *)shareUrl __attribute__((swift_name("doCopy(uri:shareUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *shareUrl __attribute__((swift_name("shareUrl")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ShareCompanion")))
@interface UnflowLinkShareCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowLinkShareCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol UnflowKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<UnflowKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFlow")))
@interface UnflowCommonFlow<T> : UnflowBase <UnflowKotlinx_coroutines_coreFlow>
- (instancetype)initWithOrigin:(id<UnflowKotlinx_coroutines_coreFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<UnflowKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<UnflowKtor_ioCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformProvider")))
@interface UnflowPlatformProvider : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) BOOL isDebug __attribute__((swift_name("isDebug")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("UnflowRepository")))
@protocol UnflowUnflowRepository
@required
- (UnflowCommonFlow<UnflowAppStyle *> *)appStyles __attribute__((swift_name("appStyles()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getAppMetadataWithCompletionHandler:(void (^)(UnflowAppMetadata * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getAppMetadata(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOpenersSubscriptionId:(NSString *)subscriptionId completionHandler:(void (^)(NSArray<UnflowOpener *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getOpeners(subscriptionId:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getScreenId:(int64_t)id completionHandler:(void (^)(UnflowScreen * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getScreen(id:completionHandler:)")));
- (UnflowCommonFlow<NSArray<UnflowOpener *> *> *)openersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("openers(subscriptionId:)")));
- (UnflowCommonFlow<NSArray<UnflowLong *> *> *)pendingScreenIds __attribute__((swift_name("pendingScreenIds()")));
- (UnflowCommonFlow<UnflowScreen *> *)screenId:(int64_t)id __attribute__((swift_name("screen(id:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)syncWithCompletionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("sync(completionHandler:)")));
@end;

__attribute__((swift_name("Alignment")))
@protocol UnflowAlignment
@required
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppMetadata")))
@interface UnflowAppMetadata : UnflowBase
- (instancetype)initWithAndroidAppId:(NSString * _Nullable)androidAppId iosAppId:(NSString * _Nullable)iosAppId __attribute__((swift_name("init(androidAppId:iosAppId:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowAppMetadata *)doCopyAndroidAppId:(NSString * _Nullable)androidAppId iosAppId:(NSString * _Nullable)iosAppId __attribute__((swift_name("doCopy(androidAppId:iosAppId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable androidAppId __attribute__((swift_name("androidAppId")));
@property (readonly) NSString * _Nullable iosAppId __attribute__((swift_name("iosAppId")));
@end;

__attribute__((swift_name("Block")))
@interface UnflowBlock : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Author")))
@interface UnflowBlockAuthor : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position name:(NSString *)name avatar:(NSString * _Nullable)avatar theme:(UnflowTheme *)theme __attribute__((swift_name("init(id:position:name:avatar:theme:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowTheme *)component5 __attribute__((swift_name("component5()")));
- (UnflowBlockAuthor *)doCopyId:(int64_t)id position:(int32_t)position name:(NSString *)name avatar:(NSString * _Nullable)avatar theme:(UnflowTheme *)theme __attribute__((swift_name("doCopy(id:position:name:avatar:theme:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Button")))
@interface UnflowBlockButton : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowLink * _Nullable)link style:(UnflowBlockButtonStyle *)style theme:(UnflowTheme *)theme __attribute__((swift_name("init(id:position:text:link:style:theme:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowBlockButtonStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowTheme *)component6 __attribute__((swift_name("component6()")));
- (UnflowBlockButton *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowLink * _Nullable)link style:(UnflowBlockButtonStyle *)style theme:(UnflowTheme *)theme __attribute__((swift_name("doCopy(id:position:text:link:style:theme:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowBlockButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyle")))
@interface UnflowBlockButtonStyle : UnflowKotlinEnum<UnflowBlockButtonStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowBlockButtonStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowBlockButtonStyle *primary __attribute__((swift_name("primary")));
@property (class, readonly) UnflowBlockButtonStyle *secondary __attribute__((swift_name("secondary")));
+ (UnflowKotlinArray<UnflowBlockButtonStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.ButtonStyleCompanion")))
@interface UnflowBlockButtonStyleCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockButtonStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Image")))
@interface UnflowBlockImage : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("init(id:position:uri:width:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowBlockImage *)doCopyId:(int64_t)id position:(int32_t)position uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("doCopy(id:position:uri:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Rating")))
@interface UnflowBlockRating : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position style:(UnflowBlockRatingStyle *)style link:(UnflowLink * _Nullable)link requestReview:(BOOL)requestReview minimumReviewRating:(int32_t)minimumReviewRating __attribute__((swift_name("init(id:position:style:link:requestReview:minimumReviewRating:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (UnflowBlockRatingStyle *)component3 __attribute__((swift_name("component3()")));
- (UnflowLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (UnflowBlockRating *)doCopyId:(int64_t)id position:(int32_t)position style:(UnflowBlockRatingStyle *)style link:(UnflowLink * _Nullable)link requestReview:(BOOL)requestReview minimumReviewRating:(int32_t)minimumReviewRating __attribute__((swift_name("doCopy(id:position:style:link:requestReview:minimumReviewRating:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) int32_t minimumReviewRating __attribute__((swift_name("minimumReviewRating")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) BOOL requestReview __attribute__((swift_name("requestReview")));
@property (readonly) UnflowBlockRatingStyle *style __attribute__((swift_name("style")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.RatingStyle")))
@interface UnflowBlockRatingStyle : UnflowKotlinEnum<UnflowBlockRatingStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowBlockRatingStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowBlockRatingStyle *emoji __attribute__((swift_name("emoji")));
@property (class, readonly) UnflowBlockRatingStyle *stars __attribute__((swift_name("stars")));
+ (UnflowKotlinArray<UnflowBlockRatingStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.RatingStyleCompanion")))
@interface UnflowBlockRatingStyleCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockRatingStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Spacer")))
@interface UnflowBlockSpacer : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("init(id:position:height:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowBlockSpacer *)doCopyId:(int64_t)id position:(int32_t)position height:(int32_t)height __attribute__((swift_name("doCopy(id:position:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Text")))
@interface UnflowBlockText : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text style:(UnflowBlockTextStyle * _Nullable)style theme:(UnflowTheme *)theme horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment __attribute__((swift_name("init(id:position:text:style:theme:horizontalAlignment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowBlockTextStyle * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowTheme *)component5 __attribute__((swift_name("component5()")));
- (UnflowHorizontalAlignment * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowBlockText *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text style:(UnflowBlockTextStyle * _Nullable)style theme:(UnflowTheme *)theme horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment __attribute__((swift_name("doCopy(id:position:text:style:theme:horizontalAlignment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowBlockTextStyle * _Nullable style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyle")))
@interface UnflowBlockTextStyle : UnflowKotlinEnum<UnflowBlockTextStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowBlockTextStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowBlockTextStyle *xl __attribute__((swift_name("xl")));
@property (class, readonly) UnflowBlockTextStyle *title __attribute__((swift_name("title")));
@property (class, readonly) UnflowBlockTextStyle *lg __attribute__((swift_name("lg")));
@property (class, readonly) UnflowBlockTextStyle *baseBold __attribute__((swift_name("baseBold")));
@property (class, readonly) UnflowBlockTextStyle *base __attribute__((swift_name("base")));
@property (class, readonly) UnflowBlockTextStyle *subtitle __attribute__((swift_name("subtitle")));
@property (class, readonly) UnflowBlockTextStyle *body __attribute__((swift_name("body")));
@property (class, readonly) UnflowBlockTextStyle *sm __attribute__((swift_name("sm")));
@property (class, readonly) UnflowBlockTextStyle *xs __attribute__((swift_name("xs")));
+ (UnflowKotlinArray<UnflowBlockTextStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.TextStyleCompanion")))
@interface UnflowBlockTextStyleCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockTextStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Video")))
@interface UnflowBlockVideo : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay __attribute__((swift_name("init(id:position:uri:width:height:poster:autoplay:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowInt * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (UnflowBlockVideo *)doCopyId:(int64_t)id position:(int32_t)position uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay __attribute__((swift_name("doCopy(id:position:uri:width:height:poster:autoplay:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL autoplay __attribute__((swift_name("autoplay")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString * _Nullable poster __attribute__((swift_name("poster")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType")))
@interface UnflowBlockType : UnflowKotlinEnum<UnflowBlockType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowBlockTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowBlockType *image __attribute__((swift_name("image")));
@property (class, readonly) UnflowBlockType *text __attribute__((swift_name("text")));
@property (class, readonly) UnflowBlockType *button __attribute__((swift_name("button")));
@property (class, readonly) UnflowBlockType *spacer __attribute__((swift_name("spacer")));
@property (class, readonly) UnflowBlockType *author __attribute__((swift_name("author")));
@property (class, readonly) UnflowBlockType *rating __attribute__((swift_name("rating")));
@property (class, readonly) UnflowBlockType *video __attribute__((swift_name("video")));
+ (UnflowKotlinArray<UnflowBlockType *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockType.Companion")))
@interface UnflowBlockTypeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockTypeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowBlockType * _Nullable)fromValueValue:(NSString *)value __attribute__((swift_name("fromValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment")))
@interface UnflowHorizontalAlignment : UnflowKotlinEnum<UnflowHorizontalAlignment *> <UnflowAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowHorizontalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowHorizontalAlignment *left __attribute__((swift_name("left")));
@property (class, readonly) UnflowHorizontalAlignment *right __attribute__((swift_name("right")));
@property (class, readonly) UnflowHorizontalAlignment *center __attribute__((swift_name("center")));
+ (UnflowKotlinArray<UnflowHorizontalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HorizontalAlignment.Companion")))
@interface UnflowHorizontalAlignmentCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowHorizontalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image")))
@interface UnflowImage : UnflowBase
- (instancetype)initWithId:(int64_t)id uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("init(id:uri:width:height:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowImage *)doCopyId:(int64_t)id uri:(NSString *)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("doCopy(id:uri:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener")))
@interface UnflowOpener : UnflowBase
- (instancetype)initWithScreenId:(int64_t)screenId priority:(int32_t)priority title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(screenId:priority:title:subtitle:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowOpener *)doCopyScreenId:(int64_t)screenId priority:(int32_t)priority title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(screenId:priority:title:subtitle:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@property (readonly) int64_t screenId __attribute__((swift_name("screenId")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page")))
@interface UnflowPage : UnflowBase
- (instancetype)initWithId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl featureImage:(UnflowImage * _Nullable)featureImage __attribute__((swift_name("init(id:theme:slots:horizontalAlignment:backgroundImageUrl:featureImage:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (UnflowTheme *)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowSlot *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowHorizontalAlignment * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowImage * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowPage *)doCopyId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl featureImage:(UnflowImage * _Nullable)featureImage __attribute__((swift_name("doCopy(id:theme:slots:horizontalAlignment:backgroundImageUrl:featureImage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundImageUrl __attribute__((swift_name("backgroundImageUrl")));
@property (readonly) UnflowImage * _Nullable featureImage __attribute__((swift_name("featureImage")));
@property (readonly) UnflowHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<UnflowSlot *> *slots __attribute__((swift_name("slots")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen")))
@interface UnflowScreen : UnflowBase
- (instancetype)initWithId:(int64_t)id subscriptionId:(NSString * _Nullable)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType layout:(UnflowScreenLayout *)layout presentationStyle:(UnflowScreenPresentationStyle *)presentationStyle opener:(UnflowOpener *)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("init(id:subscriptionId:contentType:layout:presentationStyle:opener:pages:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowScreenContentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowScreenLayout *)component4 __attribute__((swift_name("component4()")));
- (UnflowScreenPresentationStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowOpener *)component6 __attribute__((swift_name("component6()")));
- (NSArray<UnflowPage *> *)component7 __attribute__((swift_name("component7()")));
- (UnflowScreen *)doCopyId:(int64_t)id subscriptionId:(NSString * _Nullable)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType layout:(UnflowScreenLayout *)layout presentationStyle:(UnflowScreenPresentationStyle *)presentationStyle opener:(UnflowOpener *)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("doCopy(id:subscriptionId:contentType:layout:presentationStyle:opener:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowScreenContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowScreenLayout *layout __attribute__((swift_name("layout")));
@property (readonly) UnflowOpener *opener __attribute__((swift_name("opener")));
@property (readonly) NSArray<UnflowPage *> *pages __attribute__((swift_name("pages")));
@property (readonly) UnflowScreenPresentationStyle *presentationStyle __attribute__((swift_name("presentationStyle")));
@property (readonly) NSString * _Nullable subscriptionId __attribute__((swift_name("subscriptionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentType")))
@interface UnflowScreenContentType : UnflowKotlinEnum<UnflowScreenContentType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowScreenContentTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowScreenContentType *carousel __attribute__((swift_name("carousel")));
@property (class, readonly) UnflowScreenContentType *singlePage __attribute__((swift_name("singlePage")));
@property (class, readonly) UnflowScreenContentType *scrollingPage __attribute__((swift_name("scrollingPage")));
+ (UnflowKotlinArray<UnflowScreenContentType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.ContentTypeCompanion")))
@interface UnflowScreenContentTypeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowScreenContentTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.Layout")))
@interface UnflowScreenLayout : UnflowKotlinEnum<UnflowScreenLayout *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowScreenLayoutCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowScreenLayout *simple __attribute__((swift_name("simple")));
@property (class, readonly) UnflowScreenLayout *visual __attribute__((swift_name("visual")));
+ (UnflowKotlinArray<UnflowScreenLayout *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.LayoutCompanion")))
@interface UnflowScreenLayoutCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowScreenLayoutCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.PresentationStyle")))
@interface UnflowScreenPresentationStyle : UnflowKotlinEnum<UnflowScreenPresentationStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowScreenPresentationStyleCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowScreenPresentationStyle *fullPage __attribute__((swift_name("fullPage")));
@property (class, readonly) UnflowScreenPresentationStyle *bottomSheet __attribute__((swift_name("bottomSheet")));
@property (class, readonly) UnflowScreenPresentationStyle *dialog __attribute__((swift_name("dialog")));
+ (UnflowKotlinArray<UnflowScreenPresentationStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen.PresentationStyleCompanion")))
@interface UnflowScreenPresentationStyleCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowScreenPresentationStyleCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot")))
@interface UnflowSlot : UnflowBase
- (instancetype)initWithId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowBlock *> *)blocks __attribute__((swift_name("init(id:position:blocks:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowBlock *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowSlot *)doCopyId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowBlock *> *)blocks __attribute__((swift_name("doCopy(id:position:blocks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<UnflowBlock *> *blocks __attribute__((swift_name("blocks")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle")))
@interface UnflowAppStyle : UnflowBase
- (instancetype)initWithButtonRadius:(int32_t)buttonRadius themePalettes:(NSArray<UnflowAppStyleThemePalette *> *)themePalettes __attribute__((swift_name("init(buttonRadius:themePalettes:)"))) __attribute__((objc_designated_initializer));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSArray<UnflowAppStyleThemePalette *> *)component2 __attribute__((swift_name("component2()")));
- (UnflowAppStyle *)doCopyButtonRadius:(int32_t)buttonRadius themePalettes:(NSArray<UnflowAppStyleThemePalette *> *)themePalettes __attribute__((swift_name("doCopy(buttonRadius:themePalettes:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t buttonRadius __attribute__((swift_name("buttonRadius")));
@property (readonly) NSArray<UnflowAppStyleThemePalette *> *themePalettes __attribute__((swift_name("themePalettes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle.ThemePalette")))
@interface UnflowAppStyleThemePalette : UnflowBase
- (instancetype)initWithTheme:(UnflowTheme *)theme primaryColor:(NSString *)primaryColor onPrimaryColor:(NSString *)onPrimaryColor secondaryColor:(NSString *)secondaryColor onSecondaryColor:(NSString *)onSecondaryColor textTitleColor:(NSString *)textTitleColor textBodyColor:(NSString *)textBodyColor __attribute__((swift_name("init(theme:primaryColor:onPrimaryColor:secondaryColor:onSecondaryColor:textTitleColor:textBodyColor:)"))) __attribute__((objc_designated_initializer));
- (UnflowTheme *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (UnflowAppStyleThemePalette *)doCopyTheme:(UnflowTheme *)theme primaryColor:(NSString *)primaryColor onPrimaryColor:(NSString *)onPrimaryColor secondaryColor:(NSString *)secondaryColor onSecondaryColor:(NSString *)onSecondaryColor textTitleColor:(NSString *)textTitleColor textBodyColor:(NSString *)textBodyColor __attribute__((swift_name("doCopy(theme:primaryColor:onPrimaryColor:secondaryColor:onSecondaryColor:textTitleColor:textBodyColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *onPrimaryColor __attribute__((swift_name("onPrimaryColor")));
@property (readonly) NSString *onSecondaryColor __attribute__((swift_name("onSecondaryColor")));
@property (readonly) NSString *primaryColor __attribute__((swift_name("primaryColor")));
@property (readonly) NSString *secondaryColor __attribute__((swift_name("secondaryColor")));
@property (readonly) NSString *textBodyColor __attribute__((swift_name("textBodyColor")));
@property (readonly) NSString *textTitleColor __attribute__((swift_name("textTitleColor")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme")))
@interface UnflowTheme : UnflowKotlinEnum<UnflowTheme *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowThemeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowTheme *light __attribute__((swift_name("light")));
@property (class, readonly) UnflowTheme *dark __attribute__((swift_name("dark")));
@property (class, readonly) UnflowTheme *system __attribute__((swift_name("system")));
+ (UnflowKotlinArray<UnflowTheme *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *themeName __attribute__((swift_name("themeName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme.Companion")))
@interface UnflowThemeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowThemeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("GenericStorage")))
@protocol UnflowGenericStorage
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getValueKey:(NSString *)key defaultValue:(id _Nullable)defaultValue valueType:(id<UnflowKotlinKClass>)valueType completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getValue(key:defaultValue:valueType:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putValueKey:(NSString *)key value:(id)value valueType:(id<UnflowKotlinKClass>)valueType completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putValue(key:value:valueType:completionHandler:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)valuesKey:(NSString *)key defaultValue:(id _Nullable)defaultValue valueType:(id<UnflowKotlinKClass>)valueType __attribute__((swift_name("values(key:defaultValue:valueType:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SettingsFactory")))
@interface UnflowSettingsFactory : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<UnflowMultiplatform_settings_coroutinesFlowSettings>)createFlowSettingsName:(NSString *)name __attribute__((swift_name("createFlowSettings(name:)")));
@end;

__attribute__((swift_name("SettingsDataSource")))
@protocol UnflowSettingsDataSource
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDeviceIdWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDeviceId(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)saveDeviceIdDeviceId:(NSString *)deviceId completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("saveDeviceId(deviceId:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppMetadata_")))
@interface UnflowAppMetadata_ : UnflowBase
- (instancetype)initWithAndroid_app_id:(NSString * _Nullable)android_app_id ios_app_id:(NSString * _Nullable)ios_app_id __attribute__((swift_name("init(android_app_id:ios_app_id:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowAppMetadata_ *)doCopyAndroid_app_id:(NSString * _Nullable)android_app_id ios_app_id:(NSString * _Nullable)ios_app_id __attribute__((swift_name("doCopy(android_app_id:ios_app_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable android_app_id __attribute__((swift_name("android_app_id")));
@property (readonly) NSString * _Nullable ios_app_id __attribute__((swift_name("ios_app_id")));
@end;

__attribute__((swift_name("RuntimeTransacter")))
@protocol UnflowRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<UnflowRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<UnflowRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppMetadataQueries")))
@protocol UnflowAppMetadataQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllAppMetadata __attribute__((swift_name("deleteAllAppMetadata()")));
- (void)insertAppMetadataAppMetadata:(UnflowAppMetadata_ *)appMetadata __attribute__((swift_name("insertAppMetadata(appMetadata:)")));
- (UnflowRuntimeQuery<UnflowAppMetadata_ *> *)selectAllAppMetadata __attribute__((swift_name("selectAllAppMetadata()")));
- (UnflowRuntimeQuery<id> *)selectAllAppMetadataMapper:(id (^)(NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllAppMetadata(mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyle_")))
@interface UnflowAppStyle_ : UnflowBase
- (instancetype)initWithButton_radius:(int64_t)button_radius __attribute__((swift_name("init(button_radius:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (UnflowAppStyle_ *)doCopyButton_radius:(int64_t)button_radius __attribute__((swift_name("doCopy(button_radius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t button_radius __attribute__((swift_name("button_radius")));
@end;

__attribute__((swift_name("AppStyleQueries")))
@protocol UnflowAppStyleQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllThemes __attribute__((swift_name("deleteAllThemes()")));
- (void)deleteAppStyle __attribute__((swift_name("deleteAppStyle()")));
- (void)insertAppStyleAppStyle:(UnflowAppStyle_ *)appStyle __attribute__((swift_name("insertAppStyle(appStyle:)")));
- (void)insertThemeTheme:(UnflowTheme_ *)theme __attribute__((swift_name("insertTheme(theme:)")));
- (UnflowRuntimeQuery<UnflowLong *> *)selectAllAppStyle __attribute__((swift_name("selectAllAppStyle()")));
- (UnflowRuntimeQuery<UnflowTheme_ *> *)selectAllThemes __attribute__((swift_name("selectAllThemes()")));
- (UnflowRuntimeQuery<id> *)selectAllThemesMapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectAllThemes(mapper:)")));
- (UnflowRuntimeQuery<UnflowTheme_ *> *)selectThemeWithNameName:(NSString *)name __attribute__((swift_name("selectThemeWithName(name:)")));
- (UnflowRuntimeQuery<id> *)selectThemeWithNameName:(NSString *)name mapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectThemeWithName(name:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block_")))
@interface UnflowBlock_ : UnflowBase
- (instancetype)initWithBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay rating_style:(NSString * _Nullable)rating_style request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating alignment:(NSString * _Nullable)alignment __attribute__((swift_name("init(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:width:height:poster:autoplay:rating_style:request_review:minimum_review_rating:alignment:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (UnflowInt * _Nullable)component11 __attribute__((swift_name("component11()")));
- (UnflowInt * _Nullable)component12 __attribute__((swift_name("component12()")));
- (NSString * _Nullable)component13 __attribute__((swift_name("component13()")));
- (BOOL)component14 __attribute__((swift_name("component14()")));
- (NSString * _Nullable)component15 __attribute__((swift_name("component15()")));
- (BOOL)component16 __attribute__((swift_name("component16()")));
- (UnflowInt * _Nullable)component17 __attribute__((swift_name("component17()")));
- (NSString * _Nullable)component18 __attribute__((swift_name("component18()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UnflowBlock_ *)doCopyBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay rating_style:(NSString * _Nullable)rating_style request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating alignment:(NSString * _Nullable)alignment __attribute__((swift_name("doCopy(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:width:height:poster:autoplay:rating_style:request_review:minimum_review_rating:alignment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alignment __attribute__((swift_name("alignment")));
@property (readonly) BOOL autoplay __attribute__((swift_name("autoplay")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) int64_t block_id __attribute__((swift_name("block_id")));
@property (readonly) NSString *block_type __attribute__((swift_name("block_type")));
@property (readonly) NSString * _Nullable button_style __attribute__((swift_name("button_style")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) UnflowInt * _Nullable minimum_review_rating __attribute__((swift_name("minimum_review_rating")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString * _Nullable poster __attribute__((swift_name("poster")));
@property (readonly) NSString * _Nullable rating_style __attribute__((swift_name("rating_style")));
@property (readonly) BOOL request_review __attribute__((swift_name("request_review")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@property (readonly) NSString * _Nullable text_style __attribute__((swift_name("text_style")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface UnflowDatabaseDriverFactory : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<UnflowRuntimeSqlDriver>)createDriverMigrationCallback:(UnflowRuntimeAfterVersionWithDriver *)migrationCallback __attribute__((swift_name("createDriver(migrationCallback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Image_")))
@interface UnflowImage_ : UnflowBase
- (instancetype)initWithImage_id:(int64_t)image_id uri:(NSString * _Nullable)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height page_id:(UnflowLong * _Nullable)page_id __attribute__((swift_name("init(image_id:uri:width:height:page_id:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowLong * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowImage_ *)doCopyImage_id:(int64_t)image_id uri:(NSString * _Nullable)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height page_id:(UnflowLong * _Nullable)page_id __attribute__((swift_name("doCopy(image_id:uri:width:height:page_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int64_t image_id __attribute__((swift_name("image_id")));
@property (readonly) UnflowLong * _Nullable page_id __attribute__((swift_name("page_id")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link_")))
@interface UnflowLink_ : UnflowBase
- (instancetype)initWithLink_id:(int64_t)link_id uri:(NSString * _Nullable)uri name:(NSString * _Nullable)name __attribute__((swift_name("init(link_id:uri:name:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowLink_ *)doCopyLink_id:(int64_t)link_id uri:(NSString * _Nullable)uri name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(link_id:uri:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t link_id __attribute__((swift_name("link_id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("LinkQueries")))
@protocol UnflowLinkQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllLinks __attribute__((swift_name("deleteAllLinks()")));
- (void)insertLinkLink:(UnflowLink_ *)link __attribute__((swift_name("insertLink(link:)")));
- (UnflowRuntimeQuery<UnflowLink_ *> *)selectLinkForIdLink_id:(int64_t)link_id __attribute__((swift_name("selectLinkForId(link_id:)")));
- (UnflowRuntimeQuery<id> *)selectLinkForIdLink_id:(int64_t)link_id mapper:(id (^)(UnflowLong *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectLinkForId(link_id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Opener_")))
@interface UnflowOpener_ : UnflowBase
- (instancetype)initWithScreen_id:(int64_t)screen_id priority:(int64_t)priority title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url __attribute__((swift_name("init(screen_id:priority:title:subtitle:image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowOpener_ *)doCopyScreen_id:(int64_t)screen_id priority:(int64_t)priority title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url __attribute__((swift_name("doCopy(screen_id:priority:title:subtitle:image_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable image_url __attribute__((swift_name("image_url")));
@property (readonly) int64_t priority __attribute__((swift_name("priority")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page_")))
@interface UnflowPage_ : UnflowBase
- (instancetype)initWithPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("init(page_id:screen_id:theme:horizontal_alignment:background_image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowPage_ *)doCopyPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("doCopy(page_id:screen_id:theme:horizontal_alignment:background_image_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background_image_url __attribute__((swift_name("background_image_url")));
@property (readonly) NSString * _Nullable horizontal_alignment __attribute__((swift_name("horizontal_alignment")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PendingScreen")))
@interface UnflowPendingScreen : UnflowBase
- (instancetype)initWithScreen_id:(int64_t)screen_id __attribute__((swift_name("init(screen_id:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (UnflowPendingScreen *)doCopyScreen_id:(int64_t)screen_id __attribute__((swift_name("doCopy(screen_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen_")))
@interface UnflowScreen_ : UnflowBase
- (instancetype)initWithScreen_id:(int64_t)screen_id subscription_id:(NSString * _Nullable)subscription_id content_type:(NSString * _Nullable)content_type presentation_style:(NSString * _Nullable)presentation_style layout:(NSString * _Nullable)layout __attribute__((swift_name("init(screen_id:subscription_id:content_type:presentation_style:layout:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowScreen_ *)doCopyScreen_id:(int64_t)screen_id subscription_id:(NSString * _Nullable)subscription_id content_type:(NSString * _Nullable)content_type presentation_style:(NSString * _Nullable)presentation_style layout:(NSString * _Nullable)layout __attribute__((swift_name("doCopy(screen_id:subscription_id:content_type:presentation_style:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content_type __attribute__((swift_name("content_type")));
@property (readonly) NSString * _Nullable layout __attribute__((swift_name("layout")));
@property (readonly) NSString * _Nullable presentation_style __attribute__((swift_name("presentation_style")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable subscription_id __attribute__((swift_name("subscription_id")));
@end;

__attribute__((swift_name("ScreenQueries")))
@protocol UnflowScreenQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllBlocks __attribute__((swift_name("deleteAllBlocks()")));
- (void)deleteAllOpeners __attribute__((swift_name("deleteAllOpeners()")));
- (void)deleteAllPages __attribute__((swift_name("deleteAllPages()")));
- (void)deleteAllScreens __attribute__((swift_name("deleteAllScreens()")));
- (void)insertBlockBlock:(UnflowBlock_ *)block __attribute__((swift_name("insertBlock(block:)")));
- (void)insertImageImage:(UnflowImage_ *)image __attribute__((swift_name("insertImage(image:)")));
- (void)insertOpenerOpener:(UnflowOpener_ *)opener __attribute__((swift_name("insertOpener(opener:)")));
- (void)insertPagePage:(UnflowPage_ *)page __attribute__((swift_name("insertPage(page:)")));
- (void)insertScreenScreen:(UnflowScreen_ *)screen __attribute__((swift_name("insertScreen(screen:)")));
- (void)insertSlotSlot:(UnflowSlot_ *)slot __attribute__((swift_name("insertSlot(slot:)")));
- (UnflowRuntimeQuery<UnflowOpener_ *> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString * _Nullable)subscription_id __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:)")));
- (UnflowRuntimeQuery<id> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString * _Nullable)subscription_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowBlock_ *> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id __attribute__((swift_name("selectBlockForSlotId(slot_id:)")));
- (UnflowRuntimeQuery<id> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id mapper:(id (^)(UnflowLong *, UnflowLong *, UnflowInt *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, UnflowInt * _Nullable, UnflowInt * _Nullable, NSString * _Nullable, UnflowBoolean *, NSString * _Nullable, UnflowBoolean *, UnflowInt * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBlockForSlotId(slot_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowImage_ *> *)selectFeatureImageForPageIdPage_id:(UnflowLong * _Nullable)page_id __attribute__((swift_name("selectFeatureImageForPageId(page_id:)")));
- (UnflowRuntimeQuery<id> *)selectFeatureImageForPageIdPage_id:(UnflowLong * _Nullable)page_id mapper:(id (^)(UnflowLong *, NSString * _Nullable, UnflowInt * _Nullable, UnflowInt * _Nullable, UnflowLong * _Nullable))mapper __attribute__((swift_name("selectFeatureImageForPageId(page_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowOpener_ *> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectOpenerForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOpenerForScreenId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowPage_ *> *)selectPageForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectPageForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectPageForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectPageForScreenId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowScreen_ *> *)selectScreenForIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectScreenForId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectScreenForIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectScreenForId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowSlot_ *> *)selectSlotForPageIdPage_id:(int64_t)page_id __attribute__((swift_name("selectSlotForPageId(page_id:)")));
- (UnflowRuntimeQuery<id> *)selectSlotForPageIdPage_id:(int64_t)page_id mapper:(id (^)(UnflowLong *, UnflowLong *, UnflowInt *))mapper __attribute__((swift_name("selectSlotForPageId(page_id:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Slot_")))
@interface UnflowSlot_ : UnflowBase
- (instancetype)initWithSlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("init(slot_id:page_id:position:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowSlot_ *)doCopySlot_id:(int64_t)slot_id page_id:(int64_t)page_id position:(int32_t)position __attribute__((swift_name("doCopy(slot_id:page_id:position:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Theme_")))
@interface UnflowTheme_ : UnflowBase
- (instancetype)initWithName:(NSString *)name primary_color:(NSString *)primary_color on_primary_color:(NSString *)on_primary_color secondary_color:(NSString *)secondary_color on_secondary_color:(NSString *)on_secondary_color text_title_color:(NSString *)text_title_color text_body_color:(NSString *)text_body_color __attribute__((swift_name("init(name:primary_color:on_primary_color:secondary_color:on_secondary_color:text_title_color:text_body_color:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (UnflowTheme_ *)doCopyName:(NSString *)name primary_color:(NSString *)primary_color on_primary_color:(NSString *)on_primary_color secondary_color:(NSString *)secondary_color on_secondary_color:(NSString *)on_secondary_color text_title_color:(NSString *)text_title_color text_body_color:(NSString *)text_body_color __attribute__((swift_name("doCopy(name:primary_color:on_primary_color:secondary_color:on_secondary_color:text_title_color:text_body_color:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *on_primary_color __attribute__((swift_name("on_primary_color")));
@property (readonly) NSString *on_secondary_color __attribute__((swift_name("on_secondary_color")));
@property (readonly) NSString *primary_color __attribute__((swift_name("primary_color")));
@property (readonly) NSString *secondary_color __attribute__((swift_name("secondary_color")));
@property (readonly) NSString *text_body_color __attribute__((swift_name("text_body_color")));
@property (readonly) NSString *text_title_color __attribute__((swift_name("text_title_color")));
@end;

__attribute__((swift_name("TriggerQueries")))
@protocol UnflowTriggerQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllPendingScreens __attribute__((swift_name("deleteAllPendingScreens()")));
- (void)insertPendingScreenPendingScreen:(UnflowPendingScreen *)pendingScreen __attribute__((swift_name("insertPendingScreen(pendingScreen:)")));
- (UnflowRuntimeQuery<UnflowLong *> *)selectAllPendingScreens __attribute__((swift_name("selectAllPendingScreens()")));
@end;

__attribute__((swift_name("UnflowDatabase")))
@protocol UnflowUnflowDatabase <UnflowRuntimeTransacter>
@required
@property (readonly) id<UnflowAppMetadataQueries> appMetadataQueries __attribute__((swift_name("appMetadataQueries")));
@property (readonly) id<UnflowAppStyleQueries> appStyleQueries __attribute__((swift_name("appStyleQueries")));
@property (readonly) id<UnflowLinkQueries> linkQueries __attribute__((swift_name("linkQueries")));
@property (readonly) id<UnflowScreenQueries> screenQueries __attribute__((swift_name("screenQueries")));
@property (readonly) id<UnflowTriggerQueries> triggerQueries __attribute__((swift_name("triggerQueries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowDatabaseCompanion")))
@interface UnflowUnflowDatabaseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowUnflowDatabaseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowUnflowDatabase>)invokeDriver:(id<UnflowRuntimeSqlDriver>)driver __attribute__((swift_name("invoke(driver:)")));
@property (readonly) id<UnflowRuntimeSqlDriverSchema> Schema __attribute__((swift_name("Schema")));
@end;

__attribute__((swift_name("Analytics")))
@protocol UnflowAnalytics
@required
- (void)trackEventEvent:(UnflowUnflowEvent *)event __attribute__((swift_name("trackEvent(event:)")));
@end;

__attribute__((swift_name("AnalyticsLocalDataSource")))
@protocol UnflowAnalyticsLocalDataSource
@required
- (void)addAttributesAttributes:(NSDictionary<NSString *, NSString *> *)attributes __attribute__((swift_name("addAttributes(attributes:)")));
@property (readonly) NSDictionary<NSString *, NSString *> *attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("FlowKt")))
@interface UnflowFlowKt : UnflowBase
+ (UnflowCommonFlow<id> *)asCommonFlow:(id<UnflowKotlinx_coroutines_coreFlow>)receiver __attribute__((swift_name("asCommonFlow(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GenericStorageKt")))
@interface UnflowGenericStorageKt : UnflowBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getValue:(id<UnflowGenericStorage>)receiver key:(NSString *)key defaultValue:(id _Nullable)defaultValue completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getValue(_:key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)putValue:(id<UnflowGenericStorage>)receiver key:(NSString *)key value:(id)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putValue(_:key:value:completionHandler:)")));
+ (id<UnflowKotlinx_coroutines_coreFlow>)values:(id<UnflowGenericStorage>)receiver key:(NSString *)key defaultValue:(id _Nullable)defaultValue __attribute__((swift_name("values(_:key:defaultValue:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface UnflowKotlinEnumCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface UnflowKotlinArray<T> : UnflowBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(UnflowInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<UnflowKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinPair")))
@interface UnflowKotlinPair<__covariant A, __covariant B> : UnflowBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("init(first:second:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()")));
- (B _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowKotlinPair<A, B> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second __attribute__((swift_name("doCopy(first:second:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface UnflowKotlinThrowable : UnflowBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (UnflowKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface UnflowKotlinException : UnflowKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface UnflowKotlinRuntimeException : UnflowKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface UnflowKotlinIllegalStateException : UnflowKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface UnflowKotlinCancellationException : UnflowKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface UnflowKotlinUnit : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol UnflowKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol UnflowKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol UnflowKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol UnflowKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol UnflowKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol UnflowKotlinKClass <UnflowKotlinKDeclarationContainer, UnflowKotlinKAnnotatedElement, UnflowKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Multiplatform_settings_coroutinesSuspendSettings")))
@protocol UnflowMultiplatform_settings_coroutinesSuspendSettings
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanKey:(NSString *)key defaultValue:(BOOL)defaultValue completionHandler:(void (^)(UnflowBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getBoolean(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getBooleanOrNullKey:(NSString *)key completionHandler:(void (^)(UnflowBoolean * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getBooleanOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDoubleKey:(NSString *)key defaultValue:(double)defaultValue completionHandler:(void (^)(UnflowDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDouble(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDoubleOrNullKey:(NSString *)key completionHandler:(void (^)(UnflowDouble * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getDoubleOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloatKey:(NSString *)key defaultValue:(float)defaultValue completionHandler:(void (^)(UnflowFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloat(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFloatOrNullKey:(NSString *)key completionHandler:(void (^)(UnflowFloat * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFloatOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIntKey:(NSString *)key defaultValue:(int32_t)defaultValue completionHandler:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getInt(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getIntOrNullKey:(NSString *)key completionHandler:(void (^)(UnflowInt * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getIntOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLongKey:(NSString *)key defaultValue:(int64_t)defaultValue completionHandler:(void (^)(UnflowLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getLong(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLongOrNullKey:(NSString *)key completionHandler:(void (^)(UnflowLong * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLongOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringKey:(NSString *)key defaultValue:(NSString *)defaultValue completionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getString(key:defaultValue:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getStringOrNullKey:(NSString *)key completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getStringOrNull(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)hasKeyKey:(NSString *)key completionHandler:(void (^)(UnflowBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("hasKey(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)keysWithCompletionHandler:(void (^)(NSSet<NSString *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("keys(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putBooleanKey:(NSString *)key value:(BOOL)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putBoolean(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putDoubleKey:(NSString *)key value:(double)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putDouble(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putFloatKey:(NSString *)key value:(float)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putFloat(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putIntKey:(NSString *)key value:(int32_t)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putInt(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putLongKey:(NSString *)key value:(int64_t)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putLong(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putStringKey:(NSString *)key value:(NSString *)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("putString(key:value:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)sizeWithCompletionHandler:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("size(completionHandler:)")));
@end;

__attribute__((swift_name("Multiplatform_settings_coroutinesFlowSettings")))
@protocol UnflowMultiplatform_settings_coroutinesFlowSettings <UnflowMultiplatform_settings_coroutinesSuspendSettings>
@required
- (id<UnflowKotlinx_coroutines_coreFlow>)getBooleanFlowKey:(NSString *)key defaultValue:(BOOL)defaultValue __attribute__((swift_name("getBooleanFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getBooleanOrNullFlowKey:(NSString *)key __attribute__((swift_name("getBooleanOrNullFlow(key:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getDoubleFlowKey:(NSString *)key defaultValue:(double)defaultValue __attribute__((swift_name("getDoubleFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getDoubleOrNullFlowKey:(NSString *)key __attribute__((swift_name("getDoubleOrNullFlow(key:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getFloatFlowKey:(NSString *)key defaultValue:(float)defaultValue __attribute__((swift_name("getFloatFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getFloatOrNullFlowKey:(NSString *)key __attribute__((swift_name("getFloatOrNullFlow(key:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getIntFlowKey:(NSString *)key defaultValue:(int32_t)defaultValue __attribute__((swift_name("getIntFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getIntOrNullFlowKey:(NSString *)key __attribute__((swift_name("getIntOrNullFlow(key:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getLongFlowKey:(NSString *)key defaultValue:(int64_t)defaultValue __attribute__((swift_name("getLongFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getLongOrNullFlowKey:(NSString *)key __attribute__((swift_name("getLongOrNullFlow(key:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getStringFlowKey:(NSString *)key defaultValue:(NSString *)defaultValue __attribute__((swift_name("getStringFlow(key:defaultValue:)")));
- (id<UnflowKotlinx_coroutines_coreFlow>)getStringOrNullFlowKey:(NSString *)key __attribute__((swift_name("getStringOrNullFlow(key:)")));
@end;

__attribute__((swift_name("RuntimeQuery")))
@interface UnflowRuntimeQuery<__covariant RowType> : UnflowBase
- (instancetype)initWithQueries:(NSMutableArray<UnflowRuntimeQuery<id> *> *)queries mapper:(RowType (^)(id<UnflowRuntimeSqlCursor>))mapper __attribute__((swift_name("init(queries:mapper:)"))) __attribute__((objc_designated_initializer));
- (void)addListenerListener:(id<UnflowRuntimeQueryListener>)listener __attribute__((swift_name("addListener(listener:)")));
- (id<UnflowRuntimeSqlCursor>)execute __attribute__((swift_name("execute()")));
- (NSArray<RowType> *)executeAsList __attribute__((swift_name("executeAsList()")));
- (RowType)executeAsOne __attribute__((swift_name("executeAsOne()")));
- (RowType _Nullable)executeAsOneOrNull __attribute__((swift_name("executeAsOneOrNull()")));
- (void)notifyDataChanged __attribute__((swift_name("notifyDataChanged()")));
- (void)removeListenerListener:(id<UnflowRuntimeQueryListener>)listener __attribute__((swift_name("removeListener(listener:)")));
@property (readonly) RowType (^mapper)(id<UnflowRuntimeSqlCursor>) __attribute__((swift_name("mapper")));
@end;

__attribute__((swift_name("RuntimeTransactionCallbacks")))
@protocol UnflowRuntimeTransactionCallbacks
@required
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithoutReturn")))
@protocol UnflowRuntimeTransactionWithoutReturn <UnflowRuntimeTransactionCallbacks>
@required
- (void)rollback __attribute__((swift_name("rollback()")));
- (void)transactionBody:(void (^)(id<UnflowRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(body:)")));
@end;

__attribute__((swift_name("RuntimeTransactionWithReturn")))
@protocol UnflowRuntimeTransactionWithReturn <UnflowRuntimeTransactionCallbacks>
@required
- (void)rollbackReturnValue:(id _Nullable)returnValue __attribute__((swift_name("rollback(returnValue:)")));
- (id _Nullable)transactionBody_:(id _Nullable (^)(id<UnflowRuntimeTransactionWithReturn>))body __attribute__((swift_name("transaction(body_:)")));
@end;

__attribute__((swift_name("RuntimeCloseable")))
@protocol UnflowRuntimeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("RuntimeSqlDriver")))
@protocol UnflowRuntimeSqlDriver <UnflowRuntimeCloseable>
@required
- (UnflowRuntimeTransacterTransaction * _Nullable)currentTransaction __attribute__((swift_name("currentTransaction()")));
- (void)executeIdentifier:(UnflowInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<UnflowRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("execute(identifier:sql:parameters:binders:)")));
- (id<UnflowRuntimeSqlCursor>)executeQueryIdentifier:(UnflowInt * _Nullable)identifier sql:(NSString *)sql parameters:(int32_t)parameters binders:(void (^ _Nullable)(id<UnflowRuntimeSqlPreparedStatement>))binders __attribute__((swift_name("executeQuery(identifier:sql:parameters:binders:)")));
- (UnflowRuntimeTransacterTransaction *)doNewTransaction __attribute__((swift_name("doNewTransaction()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RuntimeAfterVersionWithDriver")))
@interface UnflowRuntimeAfterVersionWithDriver : UnflowBase
- (instancetype)initWithAfterVersion:(int32_t)afterVersion block:(void (^)(id<UnflowRuntimeSqlDriver>))block __attribute__((swift_name("init(afterVersion:block:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("RuntimeSqlDriverSchema")))
@protocol UnflowRuntimeSqlDriverSchema
@required
- (void)createDriver:(id<UnflowRuntimeSqlDriver>)driver __attribute__((swift_name("create(driver:)")));
- (void)migrateDriver:(id<UnflowRuntimeSqlDriver>)driver oldVersion:(int32_t)oldVersion newVersion:(int32_t)newVersion __attribute__((swift_name("migrate(driver:oldVersion:newVersion:)")));
@property (readonly) int32_t version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol UnflowKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("RuntimeSqlCursor")))
@protocol UnflowRuntimeSqlCursor <UnflowRuntimeCloseable>
@required
- (UnflowKotlinByteArray * _Nullable)getBytesIndex:(int32_t)index __attribute__((swift_name("getBytes(index:)")));
- (UnflowDouble * _Nullable)getDoubleIndex:(int32_t)index __attribute__((swift_name("getDouble(index:)")));
- (UnflowLong * _Nullable)getLongIndex:(int32_t)index __attribute__((swift_name("getLong(index:)")));
- (NSString * _Nullable)getStringIndex:(int32_t)index __attribute__((swift_name("getString(index:)")));
- (BOOL)next_ __attribute__((swift_name("next_()")));
@end;

__attribute__((swift_name("RuntimeQueryListener")))
@protocol UnflowRuntimeQueryListener
@required
- (void)queryResultsChanged __attribute__((swift_name("queryResultsChanged()")));
@end;

__attribute__((swift_name("RuntimeTransacterTransaction")))
@interface UnflowRuntimeTransacterTransaction : UnflowBase <UnflowRuntimeTransactionCallbacks>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)afterCommitFunction:(void (^)(void))function __attribute__((swift_name("afterCommit(function:)")));
- (void)afterRollbackFunction:(void (^)(void))function __attribute__((swift_name("afterRollback(function:)")));
- (void)endTransactionSuccessful:(BOOL)successful __attribute__((swift_name("endTransaction(successful:)")));
@property (readonly) UnflowRuntimeTransacterTransaction * _Nullable enclosingTransaction __attribute__((swift_name("enclosingTransaction")));
@end;

__attribute__((swift_name("RuntimeSqlPreparedStatement")))
@protocol UnflowRuntimeSqlPreparedStatement
@required
- (void)bindBytesIndex:(int32_t)index bytes:(UnflowKotlinByteArray * _Nullable)bytes __attribute__((swift_name("bindBytes(index:bytes:)")));
- (void)bindDoubleIndex:(int32_t)index double:(UnflowDouble * _Nullable)double_ __attribute__((swift_name("bindDouble(index:double:)")));
- (void)bindLongIndex:(int32_t)index long:(UnflowLong * _Nullable)long_ __attribute__((swift_name("bindLong(index:long:)")));
- (void)bindStringIndex:(int32_t)index string:(NSString * _Nullable)string __attribute__((swift_name("bindString(index:string:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface UnflowKotlinByteArray : UnflowBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(UnflowByte *(^)(UnflowInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (UnflowKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface UnflowKotlinByteIterator : UnflowBase <UnflowKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
