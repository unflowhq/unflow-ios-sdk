#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UnflowUnflowEvent, UnflowUnflowEventCompanion, UnflowUnflowEventActionInteraction, UnflowUnflowEventAction, UnflowKotlinEnumCompanion, UnflowKotlinEnum<E>, UnflowKotlinArray<T>, UnflowUnflowEventScreen, UnflowKotlinPair<__covariant A, __covariant B>, UnflowUnflowSdk, UnflowUnflowSdkConfig, UnflowDatabaseDriverFactory, UnflowUnflowComponent, UnflowLink, UnflowLinkActionCompanion, UnflowLinkAction, UnflowLinkActionClose, UnflowLinkLinkIdCompanion, UnflowLinkLinkId, UnflowLinkNavigable, UnflowLinkNavigableHttp, UnflowLinkNavigableOther, UnflowKotlinUnit, UnflowAppStyleTheme, UnflowCommonFlow<T>, UnflowOpener, UnflowScreen, UnflowBlock, UnflowTheme, UnflowBlockAuthor, UnflowBlockButtonStyle, UnflowBlockButton, UnflowBlockButtonStyleCompanion, UnflowBlockImage, UnflowBlockSpacer, UnflowBlockTextStyle, UnflowBlockText, UnflowBlockTextStyleCompanion, UnflowBlockTypeCompanion, UnflowBlockType, UnflowHorizontalAlignmentCompanion, UnflowHorizontalAlignment, UnflowSlot, UnflowVerticalAlignment, UnflowPage, UnflowScreenContentType, UnflowScreenContentTypeCompanion, UnflowVerticalAlignmentCompanion, UnflowThemeCompanion, UnflowTheme_, UnflowRuntimeQuery<__covariant RowType>, UnflowBlock_, UnflowRuntimeAfterVersionWithDriver, UnflowLink_, UnflowOpener_, UnflowPage_, UnflowScreen_, UnflowSlot_, UnflowUnflowDatabaseCompanion, UnflowKotlinThrowable, UnflowKotlinException, UnflowKotlinRuntimeException, UnflowKotlinIllegalStateException, UnflowRuntimeTransacterTransaction, UnflowKotlinByteArray, UnflowKotlinByteIterator;

@protocol UnflowKotlinComparable, UnflowAnalyticsListener, UnflowAnalytics, UnflowAnalyticsLocalDataSource, UnflowUnflowRepository, UnflowKotlinx_coroutines_coreFlowCollector, UnflowKotlinx_coroutines_coreFlow, UnflowKtor_ioCloseable, UnflowAlignment, UnflowRuntimeTransactionWithoutReturn, UnflowRuntimeTransactionWithReturn, UnflowRuntimeTransacter, UnflowRuntimeSqlDriver, UnflowAppStyleQueries, UnflowLinkQueries, UnflowScreenQueries, UnflowUnflowDatabase, UnflowRuntimeSqlDriverSchema, UnflowKotlinIterator, UnflowRuntimeSqlCursor, UnflowRuntimeQueryListener, UnflowRuntimeTransactionCallbacks, UnflowRuntimeSqlPreparedStatement, UnflowRuntimeCloseable;

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
- (void)setupConfig:(UnflowUnflowSdkConfig *)config databaseDriverFactory:(UnflowDatabaseDriverFactory *)databaseDriverFactory analyticsListener:(id<UnflowAnalyticsListener> _Nullable)analyticsListener __attribute__((swift_name("setup(config:databaseDriverFactory:analyticsListener:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowComponent")))
@interface UnflowUnflowComponent : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unflowComponent __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowUnflowComponent *shared __attribute__((swift_name("shared")));
@property (readonly) id<UnflowAnalytics> analytics __attribute__((swift_name("analytics")));
@property (readonly) id<UnflowAnalyticsLocalDataSource> analyticsStorage __attribute__((swift_name("analyticsStorage")));
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
@interface UnflowLinkNavigableOther : UnflowLink
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
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("UnflowRepository")))
@protocol UnflowUnflowRepository
@required
- (UnflowCommonFlow<NSArray<UnflowAppStyleTheme *> *> *)appStyleThemes __attribute__((swift_name("appStyleThemes()")));
- (UnflowCommonFlow<NSArray<UnflowOpener *> *> *)openersSubscriptionId:(NSString *)subscriptionId __attribute__((swift_name("openers(subscriptionId:)")));
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
- (instancetype)initWithId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("init(id:position:uri:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowBlockImage *)doCopyId:(int64_t)id position:(int32_t)position uri:(NSString *)uri __attribute__((swift_name("doCopy(id:position:uri:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
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
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text style:(UnflowBlockTextStyle * _Nullable)style theme:(UnflowTheme *)theme __attribute__((swift_name("init(id:position:text:style:theme:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowBlockTextStyle * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowTheme *)component5 __attribute__((swift_name("component5()")));
- (UnflowBlockText *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text style:(UnflowBlockTextStyle * _Nullable)style theme:(UnflowTheme *)theme __attribute__((swift_name("doCopy(id:position:text:style:theme:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
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
@property (class, readonly) UnflowBlockTextStyle *title __attribute__((swift_name("title")));
@property (class, readonly) UnflowBlockTextStyle *subtitle __attribute__((swift_name("subtitle")));
@property (class, readonly) UnflowBlockTextStyle *body __attribute__((swift_name("body")));
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
__attribute__((swift_name("Opener")))
@interface UnflowOpener : UnflowBase
- (instancetype)initWithScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("init(screenId:title:subtitle:imageUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowOpener *)doCopyScreenId:(int64_t)screenId title:(NSString *)title subtitle:(NSString * _Nullable)subtitle imageUrl:(NSString * _Nullable)imageUrl __attribute__((swift_name("doCopy(screenId:title:subtitle:imageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable imageUrl __attribute__((swift_name("imageUrl")));
@property (readonly) int64_t screenId __attribute__((swift_name("screenId")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page")))
@interface UnflowPage : UnflowBase
- (instancetype)initWithId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots verticalAlignment:(UnflowVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("init(id:theme:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (UnflowTheme *)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowSlot *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowVerticalAlignment * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowHorizontalAlignment * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowPage *)doCopyId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots verticalAlignment:(UnflowVerticalAlignment * _Nullable)verticalAlignment horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl __attribute__((swift_name("doCopy(id:theme:slots:verticalAlignment:horizontalAlignment:backgroundImageUrl:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable backgroundImageUrl __attribute__((swift_name("backgroundImageUrl")));
@property (readonly) UnflowHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<UnflowSlot *> *slots __attribute__((swift_name("slots")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@property (readonly) UnflowVerticalAlignment * _Nullable verticalAlignment __attribute__((swift_name("verticalAlignment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen")))
@interface UnflowScreen : UnflowBase
- (instancetype)initWithId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType opener:(UnflowOpener *)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("init(id:subscriptionId:contentType:opener:pages:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowScreenContentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowOpener *)component4 __attribute__((swift_name("component4()")));
- (NSArray<UnflowPage *> *)component5 __attribute__((swift_name("component5()")));
- (UnflowScreen *)doCopyId:(int64_t)id subscriptionId:(NSString *)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType opener:(UnflowOpener *)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("doCopy(id:subscriptionId:contentType:opener:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowScreenContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowOpener *opener __attribute__((swift_name("opener")));
@property (readonly) NSArray<UnflowPage *> *pages __attribute__((swift_name("pages")));
@property (readonly) NSString *subscriptionId __attribute__((swift_name("subscriptionId")));
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
@property (readonly) NSString *apiValue __attribute__((swift_name("apiValue")));
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
__attribute__((swift_name("VerticalAlignment")))
@interface UnflowVerticalAlignment : UnflowKotlinEnum<UnflowVerticalAlignment *> <UnflowAlignment>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowVerticalAlignmentCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowVerticalAlignment *top __attribute__((swift_name("top")));
@property (class, readonly) UnflowVerticalAlignment *bottom __attribute__((swift_name("bottom")));
@property (class, readonly) UnflowVerticalAlignment *center __attribute__((swift_name("center")));
+ (UnflowKotlinArray<UnflowVerticalAlignment *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("VerticalAlignment.Companion")))
@interface UnflowVerticalAlignmentCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowVerticalAlignmentCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyleTheme")))
@interface UnflowAppStyleTheme : UnflowBase
- (instancetype)initWithTheme:(UnflowTheme *)theme primaryColor:(NSString *)primaryColor onPrimaryColor:(NSString *)onPrimaryColor secondaryColor:(NSString *)secondaryColor onSecondaryColor:(NSString *)onSecondaryColor textTitleColor:(NSString *)textTitleColor textBodyColor:(NSString *)textBodyColor __attribute__((swift_name("init(theme:primaryColor:onPrimaryColor:secondaryColor:onSecondaryColor:textTitleColor:textBodyColor:)"))) __attribute__((objc_designated_initializer));
- (UnflowTheme *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (UnflowAppStyleTheme *)doCopyTheme:(UnflowTheme *)theme primaryColor:(NSString *)primaryColor onPrimaryColor:(NSString *)onPrimaryColor secondaryColor:(NSString *)secondaryColor onSecondaryColor:(NSString *)onSecondaryColor textTitleColor:(NSString *)textTitleColor textBodyColor:(NSString *)textBodyColor __attribute__((swift_name("doCopy(theme:primaryColor:onPrimaryColor:secondaryColor:onSecondaryColor:textTitleColor:textBodyColor:)")));
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

__attribute__((swift_name("RuntimeTransacter")))
@protocol UnflowRuntimeTransacter
@required
- (void)transactionNoEnclosing:(BOOL)noEnclosing body:(void (^)(id<UnflowRuntimeTransactionWithoutReturn>))body __attribute__((swift_name("transaction(noEnclosing:body:)")));
- (id _Nullable)transactionWithResultNoEnclosing:(BOOL)noEnclosing bodyWithReturn:(id _Nullable (^)(id<UnflowRuntimeTransactionWithReturn>))bodyWithReturn __attribute__((swift_name("transactionWithResult(noEnclosing:bodyWithReturn:)")));
@end;

__attribute__((swift_name("AppStyleQueries")))
@protocol UnflowAppStyleQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllThemes __attribute__((swift_name("deleteAllThemes()")));
- (void)insertThemeTheme:(UnflowTheme_ *)theme __attribute__((swift_name("insertTheme(theme:)")));
- (UnflowRuntimeQuery<UnflowTheme_ *> *)selectAllThemes __attribute__((swift_name("selectAllThemes()")));
- (UnflowRuntimeQuery<id> *)selectAllThemesMapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectAllThemes(mapper:)")));
- (UnflowRuntimeQuery<UnflowTheme_ *> *)selectThemeWithNameName:(NSString *)name __attribute__((swift_name("selectThemeWithName(name:)")));
- (UnflowRuntimeQuery<id> *)selectThemeWithNameName:(NSString *)name mapper:(id (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *))mapper __attribute__((swift_name("selectThemeWithName(name:mapper:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block_")))
@interface UnflowBlock_ : UnflowBase
- (instancetype)initWithBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar __attribute__((swift_name("init(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component10 __attribute__((swift_name("component10()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UnflowBlock_ *)doCopyBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar __attribute__((swift_name("doCopy(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) int64_t block_id __attribute__((swift_name("block_id")));
@property (readonly) NSString *block_type __attribute__((swift_name("block_type")));
@property (readonly) NSString * _Nullable button_style __attribute__((swift_name("button_style")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) int64_t slot_id __attribute__((swift_name("slot_id")));
@property (readonly) NSString * _Nullable text_style __attribute__((swift_name("text_style")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) NSString *value_ __attribute__((swift_name("value_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DatabaseDriverFactory")))
@interface UnflowDatabaseDriverFactory : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id<UnflowRuntimeSqlDriver>)createDriverMigrationCallback:(UnflowRuntimeAfterVersionWithDriver *)migrationCallback __attribute__((swift_name("createDriver(migrationCallback:)")));
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
- (instancetype)initWithScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url __attribute__((swift_name("init(screen_id:title:subtitle:image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowOpener_ *)doCopyScreen_id:(int64_t)screen_id title:(NSString *)title subtitle:(NSString * _Nullable)subtitle image_url:(NSString * _Nullable)image_url __attribute__((swift_name("doCopy(screen_id:title:subtitle:image_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable image_url __attribute__((swift_name("image_url")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Page_")))
@interface UnflowPage_ : UnflowBase
- (instancetype)initWithPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("init(page_id:screen_id:theme:vertical_alignment:horizontal_alignment:background_image_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowPage_ *)doCopyPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme vertical_alignment:(NSString * _Nullable)vertical_alignment horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url __attribute__((swift_name("doCopy(page_id:screen_id:theme:vertical_alignment:horizontal_alignment:background_image_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background_image_url __attribute__((swift_name("background_image_url")));
@property (readonly) NSString * _Nullable horizontal_alignment __attribute__((swift_name("horizontal_alignment")));
@property (readonly) int64_t page_id __attribute__((swift_name("page_id")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@property (readonly) NSString * _Nullable vertical_alignment __attribute__((swift_name("vertical_alignment")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen_")))
@interface UnflowScreen_ : UnflowBase
- (instancetype)initWithScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("init(screen_id:subscription_id:content_type:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowScreen_ *)doCopyScreen_id:(int64_t)screen_id subscription_id:(NSString *)subscription_id content_type:(NSString * _Nullable)content_type __attribute__((swift_name("doCopy(screen_id:subscription_id:content_type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable content_type __attribute__((swift_name("content_type")));
@property (readonly) int64_t screen_id __attribute__((swift_name("screen_id")));
@property (readonly) NSString *subscription_id __attribute__((swift_name("subscription_id")));
@end;

__attribute__((swift_name("ScreenQueries")))
@protocol UnflowScreenQueries <UnflowRuntimeTransacter>
@required
- (void)deleteAllBlocks __attribute__((swift_name("deleteAllBlocks()")));
- (void)deleteAllOpeners __attribute__((swift_name("deleteAllOpeners()")));
- (void)deleteAllPages __attribute__((swift_name("deleteAllPages()")));
- (void)deleteAllScreens __attribute__((swift_name("deleteAllScreens()")));
- (void)insertBlockBlock:(UnflowBlock_ *)block __attribute__((swift_name("insertBlock(block:)")));
- (void)insertOpenerOpener:(UnflowOpener_ *)opener __attribute__((swift_name("insertOpener(opener:)")));
- (void)insertPagePage:(UnflowPage_ *)page __attribute__((swift_name("insertPage(page:)")));
- (void)insertScreenScreen:(UnflowScreen_ *)screen __attribute__((swift_name("insertScreen(screen:)")));
- (void)insertSlotSlot:(UnflowSlot_ *)slot __attribute__((swift_name("insertSlot(slot:)")));
- (UnflowRuntimeQuery<UnflowOpener_ *> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:)")));
- (UnflowRuntimeQuery<id> *)selectAllOpenersForSubscriptionIdSubscription_id:(NSString *)subscription_id mapper:(id (^)(UnflowLong *, NSString *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectAllOpenersForSubscriptionId(subscription_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowBlock_ *> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id __attribute__((swift_name("selectBlockForSlotId(slot_id:)")));
- (UnflowRuntimeQuery<id> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id mapper:(id (^)(UnflowLong *, UnflowLong *, UnflowInt *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBlockForSlotId(slot_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowOpener_ *> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectOpenerForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, NSString *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOpenerForScreenId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowPage_ *> *)selectPageForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectPageForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectPageForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectPageForScreenId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowScreen_ *> *)selectScreenForIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectScreenForId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectScreenForIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, NSString *, NSString * _Nullable))mapper __attribute__((swift_name("selectScreenForId(screen_id:mapper:)")));
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

__attribute__((swift_name("UnflowDatabase")))
@protocol UnflowUnflowDatabase <UnflowRuntimeTransacter>
@required
@property (readonly) id<UnflowAppStyleQueries> appStyleQueries __attribute__((swift_name("appStyleQueries")));
@property (readonly) id<UnflowLinkQueries> linkQueries __attribute__((swift_name("linkQueries")));
@property (readonly) id<UnflowScreenQueries> screenQueries __attribute__((swift_name("screenQueries")));
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

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol UnflowKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
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

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol UnflowKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
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
