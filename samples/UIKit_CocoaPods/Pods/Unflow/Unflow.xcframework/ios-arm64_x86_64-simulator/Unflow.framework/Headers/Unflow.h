#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class UnflowUnflowEvent, UnflowUnflowSdk, UnflowUnflowSdkConfig, UnflowDatabaseDriverFactory, UnflowSettingsFactory, UnflowKotlinUnit, UnflowPlatformProvider, UnflowTrackUnflowEventUseCase, UnflowTrackAnalyticsEventUseCase, UnflowUnflowComponent, UnflowLink, UnflowLinkActionCompanion, UnflowLinkAction, UnflowLinkActionClose, UnflowLinkLinkIdCompanion, UnflowLinkLinkId, UnflowLinkNavigable, UnflowLinkNavigableHttp, UnflowLinkNavigableOther, UnflowLinkShareCompanion, UnflowLinkShare, UnflowAppStyle, UnflowCommonFlow<T>, UnflowAppMetadata, UnflowOpener, UnflowScreen, UnflowPingResponse, UnflowBlock, UnflowTheme, UnflowBlockAuthor, UnflowBlockButtonStyle, UnflowBlockButton, UnflowKotlinEnumCompanion, UnflowKotlinEnum<E>, UnflowBlockButtonStyleCompanion, UnflowKotlinArray<T>, UnflowBlockImage, UnflowBlockRatingStyle, UnflowBlockRating, UnflowBlockRatingStyleCompanion, UnflowBlockSpacer, UnflowBlockTextStyle, UnflowHorizontalAlignment, UnflowBlockText, UnflowBlockTextStyleCompanion, UnflowBlockVideo, UnflowBlockTypeCompanion, UnflowBlockType, UnflowHorizontalAlignmentCompanion, UnflowImage, UnflowSlot, UnflowPageBackground, UnflowPage, UnflowPageBackgroundBackgroundType, UnflowPageBackgroundBackgroundTypeCompanion, UnflowScreenContentType, UnflowScreenLayout, UnflowScreenPresentationStyle, UnflowScreenContentTypeCompanion, UnflowScreenLayoutCompanion, UnflowScreenPresentationStyleCompanion, UnflowAppStyleThemePalette, UnflowThemeCompanion, UnflowAppMetadataResponseCompanion, UnflowAppMetadataResponse, UnflowAppStyleResponseTheme, UnflowAppStyleResponseCompanion, UnflowAppStyleResponse, UnflowAppStyleResponseThemeCompanion, UnflowBlockResponseStyle, UnflowBlockResponseData, UnflowBlockResponseCompanion, UnflowBlockResponse, UnflowBlockResponseDataCompanion, UnflowBlockResponseStyleCompanion, UnflowEmptyResponseCompanion, UnflowImageResponseCompanion, UnflowImageResponse, UnflowLinkResponseCompanion, UnflowLinkResponse, UnflowOpenerContextCompanion, UnflowOpenerContext, UnflowPageBackgroundResponseCompanion, UnflowPageBackgroundResponse, UnflowSlotResponse, UnflowPageResponseCompanion, UnflowPageResponse, UnflowScreenResponse, UnflowPingResponseCompanion, UnflowScreenResponseCompanion, UnflowSlotResponseCompanion, UnflowAppMetadata_, UnflowRuntimeQuery<__covariant RowType>, UnflowAppStyle_, UnflowTheme_, UnflowBlock_, UnflowRuntimeAfterVersionWithDriver, UnflowImage_, UnflowLink_, UnflowOpener_, UnflowPage_, UnflowPendingScreen, UnflowScreen_, UnflowSlot_, UnflowUnflowDatabaseCompanion, UnflowBuildType, UnflowKtor_client_coreHttpClient, UnflowKtor_client_coreHttpClientConfig<T>, UnflowLocaleProvider, UnflowTrackDefaultAttributesUseCaseCompanion, UnflowKtor_httpHeadersBuilder, UnflowKtor_client_coreHttpRequestBuilderCompanion, UnflowKtor_client_coreHttpRequestData, UnflowKtor_client_coreHttpRequestBuilder, UnflowKtor_httpURLBuilder, UnflowKtor_utilsTypeInfo, UnflowKtor_httpHttpMethod, UnflowKotlinThrowable, UnflowKotlinException, UnflowKotlinRuntimeException, UnflowKotlinIllegalStateException, UnflowRuntimeTransacterTransaction, UnflowKtor_client_coreHttpClientEngineConfig, UnflowKtor_eventsEvents, UnflowKtor_client_coreHttpReceivePipeline, UnflowKtor_client_coreHttpRequestPipeline, UnflowKtor_client_coreHttpResponsePipeline, UnflowKtor_client_coreHttpSendPipeline, UnflowKtor_utilsStringValuesBuilderImpl, UnflowKtor_httpUrl, UnflowKtor_httpOutgoingContent, UnflowKtor_utilsAttributeKey<T>, UnflowKtor_httpURLProtocol, UnflowKtor_httpURLBuilderCompanion, UnflowKotlinCancellationException, UnflowKtor_httpHttpMethodCompanion, UnflowKotlinx_serialization_coreSerializersModule, UnflowKotlinx_serialization_coreSerialKind, UnflowKotlinNothing, UnflowKotlinByteArray, UnflowKtor_client_coreHttpResponseData, UnflowKotlinx_coroutines_coreCoroutineDispatcher, UnflowKtor_client_coreProxyConfig, UnflowKtor_eventsEventDefinition<T>, UnflowKtor_utilsPipelinePhase, UnflowKtor_utilsPipeline<TSubject, TContext>, UnflowKtor_client_coreHttpReceivePipelinePhases, UnflowKtor_client_coreHttpResponse, UnflowKtor_client_coreHttpRequestPipelinePhases, UnflowKtor_client_coreHttpResponsePipelinePhases, UnflowKtor_client_coreHttpResponseContainer, UnflowKtor_client_coreHttpClientCall, UnflowKtor_client_coreHttpSendPipelinePhases, UnflowKtor_httpUrlCompanion, UnflowKtor_httpContentType, UnflowKtor_httpHttpStatusCode, UnflowKtor_httpURLProtocolCompanion, UnflowKotlinKTypeProjection, UnflowKotlinByteIterator, UnflowKtor_utilsGMTDate, UnflowKtor_httpHttpProtocolVersion, UnflowKotlinAbstractCoroutineContextElement, UnflowKotlinx_coroutines_coreCoroutineDispatcherKey, UnflowKtor_client_coreHttpClientCallCompanion, UnflowKtor_httpHeaderValueParam, UnflowKtor_httpHeaderValueWithParametersCompanion, UnflowKtor_httpHeaderValueWithParameters, UnflowKtor_httpContentTypeCompanion, UnflowKtor_httpHttpStatusCodeCompanion, UnflowKotlinKVariance, UnflowKotlinKTypeProjectionCompanion, UnflowKotlinx_coroutines_coreAtomicDesc, UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, UnflowKtor_utilsGMTDateCompanion, UnflowKtor_utilsWeekDay, UnflowKtor_utilsMonth, UnflowKtor_httpHttpProtocolVersionCompanion, UnflowKotlinAbstractCoroutineContextKey<B, E>, UnflowKtor_ioMemory, UnflowKtor_ioChunkBuffer, UnflowKtor_ioBuffer, UnflowKtor_ioByteReadPacket, UnflowKotlinx_coroutines_coreAtomicOp<__contravariant T>, UnflowKotlinx_coroutines_coreOpDescriptor, UnflowKotlinx_coroutines_coreLockFreeLinkedListNode, UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, UnflowKtor_utilsWeekDayCompanion, UnflowKtor_utilsMonthCompanion, UnflowKtor_ioMemoryCompanion, UnflowKtor_ioBufferCompanion, UnflowKtor_ioChunkBufferCompanion, UnflowKtor_ioInputCompanion, UnflowKtor_ioInput, UnflowKtor_ioByteReadPacketCompanion, UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol UnflowAnalyticsListener, UnflowAnalytics, UnflowEventRepository, UnflowAnalyticsLocalDataSource, UnflowPushRepository, UnflowTokenRepository, UnflowUnflowRepository, UnflowKotlinx_coroutines_coreFlowCollector, UnflowKotlinx_coroutines_coreFlow, UnflowKtor_ioCloseable, UnflowKotlinComparable, UnflowAlignment, UnflowKotlinx_serialization_coreKSerializer, UnflowRuntimeTransactionWithoutReturn, UnflowRuntimeTransactionWithReturn, UnflowRuntimeTransacter, UnflowRuntimeSqlDriver, UnflowAppMetadataQueries, UnflowAppStyleQueries, UnflowLinkQueries, UnflowScreenQueries, UnflowTriggerQueries, UnflowUnflowDatabase, UnflowRuntimeSqlDriverSchema, UnflowKotlinKClass, UnflowMultiplatform_settings_coroutinesFlowSettings, UnflowKtor_httpHttpMessageBuilder, UnflowKtor_client_coreHttpClientEngineCapability, UnflowKtor_utilsAttributes, UnflowKotlinx_coroutines_coreJob, UnflowGenericStorage, UnflowKotlinIterator, UnflowKotlinx_serialization_coreEncoder, UnflowKotlinx_serialization_coreSerialDescriptor, UnflowKotlinx_serialization_coreSerializationStrategy, UnflowKotlinx_serialization_coreDecoder, UnflowKotlinx_serialization_coreDeserializationStrategy, UnflowRuntimeSqlCursor, UnflowRuntimeQueryListener, UnflowRuntimeTransactionCallbacks, UnflowRuntimeSqlPreparedStatement, UnflowRuntimeCloseable, UnflowKotlinCoroutineContext, UnflowKotlinx_coroutines_coreCoroutineScope, UnflowKtor_client_coreHttpClientEngine, UnflowKtor_client_coreHttpClientPlugin, UnflowKotlinKDeclarationContainer, UnflowKotlinKAnnotatedElement, UnflowKotlinKClassifier, UnflowMultiplatform_settings_coroutinesSuspendSettings, UnflowKtor_utilsStringValues, UnflowKotlinMapEntry, UnflowKtor_utilsStringValuesBuilder, UnflowKtor_httpHeaders, UnflowKtor_httpParameters, UnflowKtor_httpParametersBuilder, UnflowKotlinKType, UnflowKotlinx_coroutines_coreChildHandle, UnflowKotlinx_coroutines_coreChildJob, UnflowKotlinx_coroutines_coreDisposableHandle, UnflowKotlinSequence, UnflowKotlinx_coroutines_coreSelectClause0, UnflowKotlinCoroutineContextKey, UnflowKotlinCoroutineContextElement, UnflowKotlinx_serialization_coreCompositeEncoder, UnflowKotlinAnnotation, UnflowKotlinx_serialization_coreCompositeDecoder, UnflowKotlinSuspendFunction2, UnflowKotlinx_coroutines_coreParentJob, UnflowKotlinx_coroutines_coreSelectInstance, UnflowKotlinSuspendFunction0, UnflowKotlinx_serialization_coreSerializersModuleCollector, UnflowKotlinContinuation, UnflowKotlinContinuationInterceptor, UnflowKotlinx_coroutines_coreRunnable, UnflowKotlinFunction, UnflowKtor_httpHttpMessage, UnflowKtor_ioByteReadChannel, UnflowKtor_client_coreHttpRequest, UnflowKtor_ioReadSession, UnflowKotlinSuspendFunction1, UnflowKotlinAppendable, UnflowKtor_ioObjectPool;

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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("UnflowEvent")))
@interface UnflowUnflowEvent : UnflowBase
- (instancetype)initWithName:(NSString *)name id:(NSString *)id occurredAt:(UnflowLong * _Nullable)occurredAt metadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("init(name:id:occurredAt:metadata:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowLong * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSDictionary<NSString *, id> *)component4 __attribute__((swift_name("component4()")));
- (UnflowUnflowEvent *)doCopyName:(NSString *)name id:(NSString *)id occurredAt:(UnflowLong * _Nullable)occurredAt metadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("doCopy(name:id:occurredAt:metadata:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSDictionary<NSString *, id> *metadata __attribute__((swift_name("metadata")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) UnflowLong * _Nullable occurredAt __attribute__((swift_name("occurredAt")));
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
@property (readonly) NSString *unflowVersion __attribute__((swift_name("unflowVersion")));
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
- (void)trackEventEvent:(UnflowUnflowEvent *)event completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("trackEvent(event:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackAnalyticsEventUseCase")))
@interface UnflowTrackAnalyticsEventUseCase : UnflowBase
- (instancetype)initWithAnalytics:(id<UnflowAnalytics>)analytics platformProvider:(UnflowPlatformProvider *)platformProvider __attribute__((swift_name("init(analytics:platformProvider:)"))) __attribute__((objc_designated_initializer));
- (void)invokeName:(NSString *)name metadata:(NSDictionary<NSString *, id> *)metadata __attribute__((swift_name("invoke(name:metadata:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackEventUseCase")))
@interface UnflowTrackEventUseCase : UnflowBase
- (instancetype)initWithTrackUnflowEventUseCase:(UnflowTrackUnflowEventUseCase *)trackUnflowEventUseCase trackAnalyticsEventUseCase:(UnflowTrackAnalyticsEventUseCase *)trackAnalyticsEventUseCase platformProvider:(UnflowPlatformProvider *)platformProvider __attribute__((swift_name("init(trackUnflowEventUseCase:trackAnalyticsEventUseCase:platformProvider:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeName:(NSString *)name metadata:(NSDictionary<NSString *, id> *)metadata completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(name:metadata:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackUnflowEventUseCase")))
@interface UnflowTrackUnflowEventUseCase : UnflowBase
- (instancetype)initWithEventRepository:(id<UnflowEventRepository>)eventRepository platformProvider:(UnflowPlatformProvider *)platformProvider __attribute__((swift_name("init(eventRepository:platformProvider:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeName:(NSString *)name metadata:(NSDictionary<NSString *, id> *)metadata completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(name:metadata:completionHandler:)")));
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
@property (readonly) id<UnflowPushRepository> pushRepository __attribute__((swift_name("pushRepository")));
@property (readonly) id<UnflowTokenRepository> tokenRepository __attribute__((swift_name("tokenRepository")));
@property (readonly) id<UnflowUnflowRepository> unflowRepository __attribute__((swift_name("unflowRepository")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LocaleProvider")))
@interface UnflowLocaleProvider : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)localeCode __attribute__((swift_name("localeCode()")));
- (NSString *)timezone __attribute__((swift_name("timezone()")));
@end;

__attribute__((swift_name("Link")))
@interface UnflowLink : UnflowBase
@property (readonly) NSString *uri __attribute__((swift_name("uri")));
@end;

__attribute__((swift_name("Link.Action")))
@interface UnflowLinkAction : UnflowLink
@property (class, readonly, getter=companion) UnflowLinkActionCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.ActionClose")))
@interface UnflowLinkActionClose : UnflowLinkAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
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
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Link.NavigableHttp")))
@interface UnflowLinkNavigableHttp : UnflowLinkNavigable
- (instancetype)initWithUri:(NSString *)uri __attribute__((swift_name("init(uri:)"))) __attribute__((objc_designated_initializer));
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
__attribute__((swift_name("FileReader")))
@interface UnflowFileReader : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)readFileAsStringName:(NSString *)name extension:(NSString *)extension __attribute__((swift_name("readFileAsString(name:extension:)")));
@end;

__attribute__((swift_name("UnflowRepository")))
@protocol UnflowUnflowRepository
@required
- (UnflowCommonFlow<UnflowAppStyle *> *)appStyles __attribute__((swift_name("appStyles()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deviceIdWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deviceId(completionHandler:)")));

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

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)providePingPingResponse:(UnflowPingResponse *)pingResponse completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("providePing(pingResponse:completionHandler:)")));
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
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Block.Author")))
@interface UnflowBlockAuthor : UnflowBlock
- (instancetype)initWithId:(int64_t)id position:(int32_t)position name:(NSString *)name avatar:(NSString * _Nullable)avatar theme:(UnflowTheme *)theme __attribute__((swift_name("init(id:position:name:avatar:theme:)"))) __attribute__((objc_designated_initializer));
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
- (instancetype)initWithId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowLink * _Nullable)link style:(UnflowBlockButtonStyle *)style theme:(UnflowTheme *)theme analyticsId:(NSString * _Nullable)analyticsId __attribute__((swift_name("init(id:position:text:link:style:theme:analyticsId:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowBlockButtonStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowTheme *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (UnflowBlockButton *)doCopyId:(int64_t)id position:(int32_t)position text:(NSString *)text link:(UnflowLink * _Nullable)link style:(UnflowBlockButtonStyle *)style theme:(UnflowTheme *)theme analyticsId:(NSString * _Nullable)analyticsId __attribute__((swift_name("doCopy(id:position:text:link:style:theme:analyticsId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable analyticsId __attribute__((swift_name("analyticsId")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowLink * _Nullable link __attribute__((swift_name("link")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowBlockButtonStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString *text __attribute__((swift_name("text")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
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
- (instancetype)initWithId:(int64_t)id position:(int32_t)position style:(UnflowBlockRatingStyle *)style link:(UnflowLink * _Nullable)link requestReview:(BOOL)requestReview minimumReviewRating:(int32_t)minimumReviewRating analyticsId:(NSString * _Nullable)analyticsId __attribute__((swift_name("init(id:position:style:link:requestReview:minimumReviewRating:analyticsId:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (UnflowBlockRatingStyle *)component3 __attribute__((swift_name("component3()")));
- (UnflowLink * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (UnflowBlockRating *)doCopyId:(int64_t)id position:(int32_t)position style:(UnflowBlockRatingStyle *)style link:(UnflowLink * _Nullable)link requestReview:(BOOL)requestReview minimumReviewRating:(int32_t)minimumReviewRating analyticsId:(NSString * _Nullable)analyticsId __attribute__((swift_name("doCopy(id:position:style:link:requestReview:minimumReviewRating:analyticsId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable analyticsId __attribute__((swift_name("analyticsId")));
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
- (instancetype)initWithId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl featureImage:(UnflowImage * _Nullable)featureImage duration:(UnflowInt * _Nullable)duration background:(UnflowPageBackground * _Nullable)background __attribute__((swift_name("init(id:theme:slots:horizontalAlignment:backgroundImageUrl:featureImage:duration:background:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (UnflowTheme *)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowSlot *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowHorizontalAlignment * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowImage * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (UnflowPageBackground * _Nullable)component8 __attribute__((swift_name("component8()")));
- (UnflowPage *)doCopyId:(int64_t)id theme:(UnflowTheme *)theme slots:(NSArray<UnflowSlot *> *)slots horizontalAlignment:(UnflowHorizontalAlignment * _Nullable)horizontalAlignment backgroundImageUrl:(NSString * _Nullable)backgroundImageUrl featureImage:(UnflowImage * _Nullable)featureImage duration:(UnflowInt * _Nullable)duration background:(UnflowPageBackground * _Nullable)background __attribute__((swift_name("doCopy(id:theme:slots:horizontalAlignment:backgroundImageUrl:featureImage:duration:background:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowPageBackground * _Nullable background __attribute__((swift_name("background")));
@property (readonly) NSString * _Nullable backgroundImageUrl __attribute__((swift_name("backgroundImageUrl")));
@property (readonly) UnflowInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) UnflowImage * _Nullable featureImage __attribute__((swift_name("featureImage")));
@property (readonly) UnflowHorizontalAlignment * _Nullable horizontalAlignment __attribute__((swift_name("horizontalAlignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<UnflowSlot *> *slots __attribute__((swift_name("slots")));
@property (readonly) UnflowTheme *theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageBackground")))
@interface UnflowPageBackground : UnflowBase
- (instancetype)initWithType:(UnflowPageBackgroundBackgroundType * _Nullable)type color:(NSString * _Nullable)color asset_url:(NSString * _Nullable)asset_url __attribute__((swift_name("init(type:color:asset_url:)"))) __attribute__((objc_designated_initializer));
- (UnflowPageBackgroundBackgroundType * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowPageBackground *)doCopyType:(UnflowPageBackgroundBackgroundType * _Nullable)type color:(NSString * _Nullable)color asset_url:(NSString * _Nullable)asset_url __attribute__((swift_name("doCopy(type:color:asset_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable asset_url __attribute__((swift_name("asset_url")));
@property (readonly) NSString * _Nullable color __attribute__((swift_name("color")));
@property (readonly) UnflowPageBackgroundBackgroundType * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageBackground.BackgroundType")))
@interface UnflowPageBackgroundBackgroundType : UnflowKotlinEnum<UnflowPageBackgroundBackgroundType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowPageBackgroundBackgroundTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowPageBackgroundBackgroundType *image __attribute__((swift_name("image")));
@property (class, readonly) UnflowPageBackgroundBackgroundType *video __attribute__((swift_name("video")));
+ (UnflowKotlinArray<UnflowPageBackgroundBackgroundType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageBackground.BackgroundTypeCompanion")))
@interface UnflowPageBackgroundBackgroundTypeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowPageBackgroundBackgroundTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Screen")))
@interface UnflowScreen : UnflowBase
- (instancetype)initWithId:(int64_t)id subscriptionId:(NSString * _Nullable)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType layout:(UnflowScreenLayout *)layout presentationStyle:(UnflowScreenPresentationStyle *)presentationStyle opener:(UnflowOpener * _Nullable)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("init(id:subscriptionId:contentType:layout:presentationStyle:opener:pages:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowScreenContentType * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowScreenLayout *)component4 __attribute__((swift_name("component4()")));
- (UnflowScreenPresentationStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowOpener * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSArray<UnflowPage *> *)component7 __attribute__((swift_name("component7()")));
- (UnflowScreen *)doCopyId:(int64_t)id subscriptionId:(NSString * _Nullable)subscriptionId contentType:(UnflowScreenContentType * _Nullable)contentType layout:(UnflowScreenLayout *)layout presentationStyle:(UnflowScreenPresentationStyle *)presentationStyle opener:(UnflowOpener * _Nullable)opener pages:(NSArray<UnflowPage *> *)pages __attribute__((swift_name("doCopy(id:subscriptionId:contentType:layout:presentationStyle:opener:pages:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowScreenContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) UnflowScreenLayout *layout __attribute__((swift_name("layout")));
@property (readonly) UnflowOpener * _Nullable opener __attribute__((swift_name("opener")));
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
@property (class, readonly) UnflowScreenLayout *story __attribute__((swift_name("story")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppMetadataResponse")))
@interface UnflowAppMetadataResponse : UnflowBase
- (instancetype)initWithIos_app_id:(NSString * _Nullable)ios_app_id android_app_id:(NSString * _Nullable)android_app_id __attribute__((swift_name("init(ios_app_id:android_app_id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowAppMetadataResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowAppMetadataResponse *)doCopyIos_app_id:(NSString * _Nullable)ios_app_id android_app_id:(NSString * _Nullable)android_app_id __attribute__((swift_name("doCopy(ios_app_id:android_app_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable android_app_id __attribute__((swift_name("android_app_id")));
@property (readonly) NSString * _Nullable ios_app_id __attribute__((swift_name("ios_app_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppMetadataResponse.Companion")))
@interface UnflowAppMetadataResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowAppMetadataResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyleResponse")))
@interface UnflowAppStyleResponse : UnflowBase
- (instancetype)initWithThemes:(NSArray<UnflowAppStyleResponseTheme *> *)themes button_radius:(int32_t)button_radius __attribute__((swift_name("init(themes:button_radius:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowAppStyleResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<UnflowAppStyleResponseTheme *> *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (UnflowAppStyleResponse *)doCopyThemes:(NSArray<UnflowAppStyleResponseTheme *> *)themes button_radius:(int32_t)button_radius __attribute__((swift_name("doCopy(themes:button_radius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t button_radius __attribute__((swift_name("button_radius")));
@property (readonly) NSArray<UnflowAppStyleResponseTheme *> *themes __attribute__((swift_name("themes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyleResponse.Companion")))
@interface UnflowAppStyleResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowAppStyleResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyleResponse.Theme")))
@interface UnflowAppStyleResponseTheme : UnflowBase
- (instancetype)initWithName:(NSString *)name primary_color:(NSString *)primary_color on_primary_color:(NSString *)on_primary_color secondary_color:(NSString *)secondary_color on_secondary_color:(NSString *)on_secondary_color text_title_color:(NSString *)text_title_color text_body_color:(NSString *)text_body_color __attribute__((swift_name("init(name:primary_color:on_primary_color:secondary_color:on_secondary_color:text_title_color:text_body_color:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowAppStyleResponseThemeCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString *)component7 __attribute__((swift_name("component7()")));
- (UnflowAppStyleResponseTheme *)doCopyName:(NSString *)name primary_color:(NSString *)primary_color on_primary_color:(NSString *)on_primary_color secondary_color:(NSString *)secondary_color on_secondary_color:(NSString *)on_secondary_color text_title_color:(NSString *)text_title_color text_body_color:(NSString *)text_body_color __attribute__((swift_name("doCopy(name:primary_color:on_primary_color:secondary_color:on_secondary_color:text_title_color:text_body_color:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("AppStyleResponse.ThemeCompanion")))
@interface UnflowAppStyleResponseThemeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowAppStyleResponseThemeCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse")))
@interface UnflowBlockResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id position:(int32_t)position block_type:(NSString *)block_type value:(NSString * _Nullable)value style:(UnflowBlockResponseStyle *)style data:(UnflowBlockResponseData * _Nullable)data __attribute__((swift_name("init(id:position:block_type:value:style:data:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowBlockResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowBlockResponseStyle *)component5 __attribute__((swift_name("component5()")));
- (UnflowBlockResponseData * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowBlockResponse *)doCopyId:(int64_t)id position:(int32_t)position block_type:(NSString *)block_type value:(NSString * _Nullable)value style:(UnflowBlockResponseStyle *)style data:(UnflowBlockResponseData * _Nullable)data __attribute__((swift_name("doCopy(id:position:block_type:value:style:data:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *block_type __attribute__((swift_name("block_type")));
@property (readonly) UnflowBlockResponseData * _Nullable data __attribute__((swift_name("data")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@property (readonly) UnflowBlockResponseStyle *style __attribute__((swift_name("style")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse.Companion")))
@interface UnflowBlockResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse.Data")))
@interface UnflowBlockResponseData : UnflowBase
- (instancetype)initWithUri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating analytics_id:(NSString * _Nullable)analytics_id __attribute__((swift_name("init(uri:avatar:width:height:poster:autoplay:request_review:minimum_review_rating:analytics_id:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowBlockResponseDataCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (BOOL)component6 __attribute__((swift_name("component6()")));
- (BOOL)component7 __attribute__((swift_name("component7()")));
- (UnflowInt * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UnflowBlockResponseData *)doCopyUri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating analytics_id:(NSString * _Nullable)analytics_id __attribute__((swift_name("doCopy(uri:avatar:width:height:poster:autoplay:request_review:minimum_review_rating:analytics_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable analytics_id __attribute__((swift_name("analytics_id")));
@property (readonly) BOOL autoplay __attribute__((swift_name("autoplay")));
@property (readonly) NSString * _Nullable avatar __attribute__((swift_name("avatar")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) UnflowInt * _Nullable minimum_review_rating __attribute__((swift_name("minimum_review_rating")));
@property (readonly) NSString * _Nullable poster __attribute__((swift_name("poster")));
@property (readonly) BOOL request_review __attribute__((swift_name("request_review")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse.DataCompanion")))
@interface UnflowBlockResponseDataCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockResponseDataCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse.Style")))
@interface UnflowBlockResponseStyle : UnflowBase
- (instancetype)initWithText_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme rating_style:(NSString * _Nullable)rating_style alignment:(NSString * _Nullable)alignment __attribute__((swift_name("init(text_style:button_style:theme:rating_style:alignment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowBlockResponseStyleCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowBlockResponseStyle *)doCopyText_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme rating_style:(NSString * _Nullable)rating_style alignment:(NSString * _Nullable)alignment __attribute__((swift_name("doCopy(text_style:button_style:theme:rating_style:alignment:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alignment __attribute__((swift_name("alignment")));
@property (readonly) NSString * _Nullable button_style __attribute__((swift_name("button_style")));
@property (readonly) NSString * _Nullable rating_style __attribute__((swift_name("rating_style")));
@property (readonly) NSString * _Nullable text_style __attribute__((swift_name("text_style")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BlockResponse.StyleCompanion")))
@interface UnflowBlockResponseStyleCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowBlockResponseStyleCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyResponse")))
@interface UnflowEmptyResponse : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowEmptyResponseCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EmptyResponse.Companion")))
@interface UnflowEmptyResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowEmptyResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResponse")))
@interface UnflowImageResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id uri:(NSString * _Nullable)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("init(id:uri:width:height:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowImageResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowInt * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (UnflowImageResponse *)doCopyId:(int64_t)id uri:(NSString * _Nullable)uri width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height __attribute__((swift_name("doCopy(id:uri:width:height:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowInt * _Nullable height __attribute__((swift_name("height")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@property (readonly) UnflowInt * _Nullable width __attribute__((swift_name("width")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ImageResponse.Companion")))
@interface UnflowImageResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowImageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResponse")))
@interface UnflowLinkResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id uri:(NSString * _Nullable)uri name:(NSString * _Nullable)name __attribute__((swift_name("init(id:uri:name:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowLinkResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowLinkResponse *)doCopyId:(int64_t)id uri:(NSString * _Nullable)uri name:(NSString * _Nullable)name __attribute__((swift_name("doCopy(id:uri:name:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString * _Nullable name __attribute__((swift_name("name")));
@property (readonly) NSString * _Nullable uri __attribute__((swift_name("uri")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LinkResponse.Companion")))
@interface UnflowLinkResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowLinkResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenerContext")))
@interface UnflowOpenerContext : UnflowBase
- (instancetype)initWithTitle:(NSString *)title subtitle:(NSString *)subtitle thumbnail_url:(NSString *)thumbnail_url __attribute__((swift_name("init(title:subtitle:thumbnail_url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowOpenerContextCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (UnflowOpenerContext *)doCopyTitle:(NSString *)title subtitle:(NSString *)subtitle thumbnail_url:(NSString *)thumbnail_url __attribute__((swift_name("doCopy(title:subtitle:thumbnail_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *subtitle __attribute__((swift_name("subtitle")));
@property (readonly) NSString *thumbnail_url __attribute__((swift_name("thumbnail_url")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpenerContext.Companion")))
@interface UnflowOpenerContextCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowOpenerContextCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageBackgroundResponse")))
@interface UnflowPageBackgroundResponse : UnflowBase
- (instancetype)initWithType:(NSString * _Nullable)type color:(NSString * _Nullable)color asset_url:(NSString * _Nullable)asset_url __attribute__((swift_name("init(type:color:asset_url:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowPageBackgroundResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowPageBackgroundResponse *)doCopyType:(NSString * _Nullable)type color:(NSString * _Nullable)color asset_url:(NSString * _Nullable)asset_url __attribute__((swift_name("doCopy(type:color:asset_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString * _Nullable asset_url __attribute__((swift_name("asset_url")));
@property NSString * _Nullable color __attribute__((swift_name("color")));
@property NSString * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageBackgroundResponse.Companion")))
@interface UnflowPageBackgroundResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowPageBackgroundResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageResponse")))
@interface UnflowPageResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id theme:(NSString * _Nullable)theme slots:(NSArray<UnflowSlotResponse *> *)slots horizontal_alignment:(NSString *)horizontal_alignment background_image:(NSString * _Nullable)background_image feature_image:(UnflowImageResponse * _Nullable)feature_image duration:(UnflowInt * _Nullable)duration background:(UnflowPageBackgroundResponse * _Nullable)background __attribute__((swift_name("init(id:theme:slots:horizontal_alignment:background_image:feature_image:duration:background:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowPageResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowSlotResponse *> *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowImageResponse * _Nullable)component6 __attribute__((swift_name("component6()")));
- (UnflowInt * _Nullable)component7 __attribute__((swift_name("component7()")));
- (UnflowPageBackgroundResponse * _Nullable)component8 __attribute__((swift_name("component8()")));
- (UnflowPageResponse *)doCopyId:(int64_t)id theme:(NSString * _Nullable)theme slots:(NSArray<UnflowSlotResponse *> *)slots horizontal_alignment:(NSString *)horizontal_alignment background_image:(NSString * _Nullable)background_image feature_image:(UnflowImageResponse * _Nullable)feature_image duration:(UnflowInt * _Nullable)duration background:(UnflowPageBackgroundResponse * _Nullable)background __attribute__((swift_name("doCopy(id:theme:slots:horizontal_alignment:background_image:feature_image:duration:background:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property UnflowPageBackgroundResponse * _Nullable background __attribute__((swift_name("background")));
@property (readonly) NSString * _Nullable background_image __attribute__((swift_name("background_image")));
@property UnflowInt * _Nullable duration __attribute__((swift_name("duration")));
@property (readonly) UnflowImageResponse * _Nullable feature_image __attribute__((swift_name("feature_image")));
@property (readonly) NSString *horizontal_alignment __attribute__((swift_name("horizontal_alignment")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSArray<UnflowSlotResponse *> *slots __attribute__((swift_name("slots")));
@property (readonly) NSString * _Nullable theme __attribute__((swift_name("theme")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PageResponse.Companion")))
@interface UnflowPageResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowPageResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PingResponse")))
@interface UnflowPingResponse : UnflowBase
- (instancetype)initWithScreens:(NSArray<UnflowScreenResponse *> *)screens app_style:(UnflowAppStyleResponse *)app_style links:(NSArray<UnflowLinkResponse *> *)links app_metadata:(UnflowAppMetadataResponse *)app_metadata pending_screen_ids:(NSArray<UnflowLong *> *)pending_screen_ids __attribute__((swift_name("init(screens:app_style:links:app_metadata:pending_screen_ids:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowPingResponseCompanion *companion __attribute__((swift_name("companion")));
- (NSArray<UnflowScreenResponse *> *)component1 __attribute__((swift_name("component1()")));
- (UnflowAppStyleResponse *)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowLinkResponse *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowAppMetadataResponse *)component4 __attribute__((swift_name("component4()")));
- (NSArray<UnflowLong *> *)component5 __attribute__((swift_name("component5()")));
- (UnflowPingResponse *)doCopyScreens:(NSArray<UnflowScreenResponse *> *)screens app_style:(UnflowAppStyleResponse *)app_style links:(NSArray<UnflowLinkResponse *> *)links app_metadata:(UnflowAppMetadataResponse *)app_metadata pending_screen_ids:(NSArray<UnflowLong *> *)pending_screen_ids __attribute__((swift_name("doCopy(screens:app_style:links:app_metadata:pending_screen_ids:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowAppMetadataResponse *app_metadata __attribute__((swift_name("app_metadata")));
@property (readonly) UnflowAppStyleResponse *app_style __attribute__((swift_name("app_style")));
@property (readonly) NSArray<UnflowLinkResponse *> *links __attribute__((swift_name("links")));
@property (readonly) NSArray<UnflowLong *> *pending_screen_ids __attribute__((swift_name("pending_screen_ids")));
@property (readonly) NSArray<UnflowScreenResponse *> *screens __attribute__((swift_name("screens")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PingResponse.Companion")))
@interface UnflowPingResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowPingResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenResponse")))
@interface UnflowScreenResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id subscription_id:(NSString *)subscription_id content_type:(NSString *)content_type presentation_style:(NSString *)presentation_style priority:(int32_t)priority pages:(NSArray<UnflowPageResponse *> *)pages opener_context:(UnflowOpenerContext * _Nullable)opener_context layout:(NSString *)layout __attribute__((swift_name("init(id:subscription_id:content_type:presentation_style:priority:pages:opener_context:layout:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowScreenResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString *)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (NSArray<UnflowPageResponse *> *)component6 __attribute__((swift_name("component6()")));
- (UnflowOpenerContext * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString *)component8 __attribute__((swift_name("component8()")));
- (UnflowScreenResponse *)doCopyId:(int64_t)id subscription_id:(NSString *)subscription_id content_type:(NSString *)content_type presentation_style:(NSString *)presentation_style priority:(int32_t)priority pages:(NSArray<UnflowPageResponse *> *)pages opener_context:(UnflowOpenerContext * _Nullable)opener_context layout:(NSString *)layout __attribute__((swift_name("doCopy(id:subscription_id:content_type:presentation_style:priority:pages:opener_context:layout:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content_type __attribute__((swift_name("content_type")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) NSString *layout __attribute__((swift_name("layout")));
@property (readonly) UnflowOpenerContext * _Nullable opener_context __attribute__((swift_name("opener_context")));
@property (readonly) NSArray<UnflowPageResponse *> *pages __attribute__((swift_name("pages")));
@property (readonly) NSString *presentation_style __attribute__((swift_name("presentation_style")));
@property (readonly) int32_t priority __attribute__((swift_name("priority")));
@property (readonly) NSString *subscription_id __attribute__((swift_name("subscription_id")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScreenResponse.Companion")))
@interface UnflowScreenResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowScreenResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlotResponse")))
@interface UnflowSlotResponse : UnflowBase
- (instancetype)initWithId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowBlockResponse *> *)blocks __attribute__((swift_name("init(id:position:blocks:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowSlotResponseCompanion *companion __attribute__((swift_name("companion")));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (NSArray<UnflowBlockResponse *> *)component3 __attribute__((swift_name("component3()")));
- (UnflowSlotResponse *)doCopyId:(int64_t)id position:(int32_t)position blocks:(NSArray<UnflowBlockResponse *> *)blocks __attribute__((swift_name("doCopy(id:position:blocks:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<UnflowBlockResponse *> *blocks __attribute__((swift_name("blocks")));
@property (readonly) int64_t id __attribute__((swift_name("id")));
@property (readonly) int32_t position __attribute__((swift_name("position")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SlotResponse.Companion")))
@interface UnflowSlotResponseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowSlotResponseCompanion *shared __attribute__((swift_name("shared")));
- (id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("PushRepository")))
@protocol UnflowPushRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)deregisterTokenWithCompletionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("deregisterToken(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)registerTokenToken:(NSString *)token completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("registerToken(token:completionHandler:)")));
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
- (instancetype)initWithBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay rating_style:(NSString * _Nullable)rating_style request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating alignment:(NSString * _Nullable)alignment analytics_id:(NSString * _Nullable)analytics_id __attribute__((swift_name("init(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:width:height:poster:autoplay:rating_style:request_review:minimum_review_rating:alignment:analytics_id:)"))) __attribute__((objc_designated_initializer));
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
- (NSString * _Nullable)component19 __attribute__((swift_name("component19()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (NSString *)component5 __attribute__((swift_name("component5()")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UnflowBlock_ *)doCopyBlock_id:(int64_t)block_id slot_id:(int64_t)slot_id position:(int32_t)position block_type:(NSString *)block_type value_:(NSString *)value_ text_style:(NSString * _Nullable)text_style button_style:(NSString * _Nullable)button_style theme:(NSString * _Nullable)theme uri:(NSString * _Nullable)uri avatar:(NSString * _Nullable)avatar width:(UnflowInt * _Nullable)width height:(UnflowInt * _Nullable)height poster:(NSString * _Nullable)poster autoplay:(BOOL)autoplay rating_style:(NSString * _Nullable)rating_style request_review:(BOOL)request_review minimum_review_rating:(UnflowInt * _Nullable)minimum_review_rating alignment:(NSString * _Nullable)alignment analytics_id:(NSString * _Nullable)analytics_id __attribute__((swift_name("doCopy(block_id:slot_id:position:block_type:value_:text_style:button_style:theme:uri:avatar:width:height:poster:autoplay:rating_style:request_review:minimum_review_rating:alignment:analytics_id:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable alignment __attribute__((swift_name("alignment")));
@property (readonly) NSString * _Nullable analytics_id __attribute__((swift_name("analytics_id")));
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
- (instancetype)initWithPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url duration:(UnflowInt * _Nullable)duration background_type:(NSString * _Nullable)background_type background_color:(NSString * _Nullable)background_color background_asset_url:(NSString * _Nullable)background_asset_url __attribute__((swift_name("init(page_id:screen_id:theme:horizontal_alignment:background_image_url:duration:background_type:background_color:background_asset_url:)"))) __attribute__((objc_designated_initializer));
- (int64_t)component1 __attribute__((swift_name("component1()")));
- (int64_t)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (NSString * _Nullable)component5 __attribute__((swift_name("component5()")));
- (UnflowInt * _Nullable)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (NSString * _Nullable)component9 __attribute__((swift_name("component9()")));
- (UnflowPage_ *)doCopyPage_id:(int64_t)page_id screen_id:(int64_t)screen_id theme:(NSString * _Nullable)theme horizontal_alignment:(NSString * _Nullable)horizontal_alignment background_image_url:(NSString * _Nullable)background_image_url duration:(UnflowInt * _Nullable)duration background_type:(NSString * _Nullable)background_type background_color:(NSString * _Nullable)background_color background_asset_url:(NSString * _Nullable)background_asset_url __attribute__((swift_name("doCopy(page_id:screen_id:theme:horizontal_alignment:background_image_url:duration:background_type:background_color:background_asset_url:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable background_asset_url __attribute__((swift_name("background_asset_url")));
@property (readonly) NSString * _Nullable background_color __attribute__((swift_name("background_color")));
@property (readonly) NSString * _Nullable background_image_url __attribute__((swift_name("background_image_url")));
@property (readonly) NSString * _Nullable background_type __attribute__((swift_name("background_type")));
@property (readonly) UnflowInt * _Nullable duration __attribute__((swift_name("duration")));
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
- (UnflowRuntimeQuery<id> *)selectBlockForSlotIdSlot_id:(int64_t)slot_id mapper:(id (^)(UnflowLong *, UnflowLong *, UnflowInt *, NSString *, NSString *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, UnflowInt * _Nullable, UnflowInt * _Nullable, NSString * _Nullable, UnflowBoolean *, NSString * _Nullable, UnflowBoolean *, UnflowInt * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectBlockForSlotId(slot_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowImage_ *> *)selectFeatureImageForPageIdPage_id:(UnflowLong * _Nullable)page_id __attribute__((swift_name("selectFeatureImageForPageId(page_id:)")));
- (UnflowRuntimeQuery<id> *)selectFeatureImageForPageIdPage_id:(UnflowLong * _Nullable)page_id mapper:(id (^)(UnflowLong *, NSString * _Nullable, UnflowInt * _Nullable, UnflowInt * _Nullable, UnflowLong * _Nullable))mapper __attribute__((swift_name("selectFeatureImageForPageId(page_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowOpener_ *> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectOpenerForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectOpenerForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString *, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectOpenerForScreenId(screen_id:mapper:)")));
- (UnflowRuntimeQuery<UnflowPage_ *> *)selectPageForScreenIdScreen_id:(int64_t)screen_id __attribute__((swift_name("selectPageForScreenId(screen_id:)")));
- (UnflowRuntimeQuery<id> *)selectPageForScreenIdScreen_id:(int64_t)screen_id mapper:(id (^)(UnflowLong *, UnflowLong *, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable, UnflowInt * _Nullable, NSString * _Nullable, NSString * _Nullable, NSString * _Nullable))mapper __attribute__((swift_name("selectPageForScreenId(screen_id:mapper:)")));
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BuildType")))
@interface UnflowBuildType : UnflowKotlinEnum<UnflowBuildType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowBuildType *test __attribute__((swift_name("test")));
@property (class, readonly) UnflowBuildType *debug __attribute__((swift_name("debug")));
@property (class, readonly) UnflowBuildType *regular __attribute__((swift_name("regular")));
+ (UnflowKotlinArray<UnflowBuildType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformProvider")))
@interface UnflowPlatformProvider : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) int32_t apiLevel __attribute__((swift_name("apiLevel")));
@property (readonly) UnflowBuildType *buildType __attribute__((swift_name("buildType")));
@property (readonly) BOOL isDebug __attribute__((swift_name("isDebug")));
@property (readonly) NSString *platform __attribute__((swift_name("platform")));
@end;

__attribute__((swift_name("TokenRepository")))
@protocol UnflowTokenRepository
@required
- (void)updateBearerTokenAccessToken:(NSString *)accessToken __attribute__((swift_name("updateBearerToken(accessToken:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorHttpClientProvider")))
@interface UnflowKtorHttpClientProvider : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowKtor_client_coreHttpClient * _Nullable)httpClientIsNetworkLoggingEnabled:(BOOL)isNetworkLoggingEnabled config:(void (^)(UnflowKtor_client_coreHttpClientConfig<id> *))config __attribute__((swift_name("httpClient(isNetworkLoggingEnabled:config:)")));
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

__attribute__((swift_name("Analytics")))
@protocol UnflowAnalytics
@required
- (void)trackEventEvent:(UnflowUnflowEvent *)event __attribute__((swift_name("trackEvent(event:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackDefaultAttributesUseCase")))
@interface UnflowTrackDefaultAttributesUseCase : UnflowBase
- (instancetype)initWithStorage:(id<UnflowAnalyticsLocalDataSource>)storage localeProvider:(UnflowLocaleProvider *)localeProvider platformProvider:(UnflowPlatformProvider *)platformProvider __attribute__((swift_name("init(storage:localeProvider:platformProvider:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowTrackDefaultAttributesUseCaseCompanion *companion __attribute__((swift_name("companion")));
- (void)invoke __attribute__((swift_name("invoke()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TrackDefaultAttributesUseCase.Companion")))
@interface UnflowTrackDefaultAttributesUseCaseCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowTrackDefaultAttributesUseCaseCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("AnalyticsLocalDataSource")))
@protocol UnflowAnalyticsLocalDataSource
@required
- (void)addAttributesAttributes:(NSDictionary<NSString *, NSString *> *)attributes __attribute__((swift_name("addAttributes(attributes:)")));
@property (readonly) NSDictionary<NSString *, NSString *> *attributes __attribute__((swift_name("attributes")));
@property NSString * _Nullable userId __attribute__((swift_name("userId")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol UnflowKtor_httpHttpMessageBuilder
@required
@property (readonly) UnflowKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface UnflowKtor_client_coreHttpRequestBuilder : UnflowBase <UnflowKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (UnflowKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<UnflowKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<UnflowKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<UnflowKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (UnflowKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(UnflowKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (UnflowKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(UnflowKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(UnflowKtor_httpURLBuilder *, UnflowKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property UnflowKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<UnflowKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) UnflowKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property UnflowKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end;

@interface UnflowKtor_client_coreHttpRequestBuilder (Extensions)
- (void)fromEndpointPath:(NSString *)path __attribute__((swift_name("fromEndpoint(path:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExhaustiveKt")))
@interface UnflowExhaustiveKt : UnflowBase
+ (void)doNothing __attribute__((swift_name("doNothing()")));
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

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol UnflowKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<UnflowKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<UnflowKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol UnflowKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<UnflowKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<UnflowKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol UnflowKotlinx_serialization_coreKSerializer <UnflowKotlinx_serialization_coreSerializationStrategy, UnflowKotlinx_serialization_coreDeserializationStrategy>
@required
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

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol UnflowKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<UnflowKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface UnflowKtor_client_coreHttpClient : UnflowBase <UnflowKotlinx_coroutines_coreCoroutineScope, UnflowKtor_ioCloseable>
- (instancetype)initWithEngine:(id<UnflowKtor_client_coreHttpClientEngine>)engine userConfig:(UnflowKtor_client_coreHttpClientConfig<UnflowKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (UnflowKtor_client_coreHttpClient *)configBlock:(void (^)(UnflowKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<UnflowKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<UnflowKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<UnflowKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) UnflowKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) UnflowKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) UnflowKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) UnflowKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) UnflowKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) UnflowKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface UnflowKtor_client_coreHttpClientConfig<T> : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(UnflowKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<UnflowKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(UnflowKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(UnflowKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
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

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol UnflowKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<UnflowKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<UnflowKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<UnflowKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<UnflowKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface UnflowKtor_utilsStringValuesBuilderImpl : UnflowBase <UnflowKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<UnflowKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<UnflowKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<UnflowKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<UnflowKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@property (readonly) UnflowMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface UnflowKtor_httpHeadersBuilder : UnflowKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<UnflowKtor_httpHeaders>)build __attribute__((swift_name("build()")));
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface UnflowKtor_client_coreHttpRequestBuilderCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface UnflowKtor_client_coreHttpRequestData : UnflowBase
- (instancetype)initWithUrl:(UnflowKtor_httpUrl *)url method:(UnflowKtor_httpHttpMethod *)method headers:(id<UnflowKtor_httpHeaders>)headers body:(UnflowKtor_httpOutgoingContent *)body executionContext:(id<UnflowKotlinx_coroutines_coreJob>)executionContext attributes:(id<UnflowKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<UnflowKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<UnflowKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<UnflowKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol UnflowKtor_client_coreHttpClientEngineCapability
@required
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol UnflowKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(UnflowKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key:)")));
- (id _Nullable)getOrNullKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(UnflowKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<UnflowKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface UnflowKtor_httpURLBuilder : UnflowBase
- (instancetype)initWithProtocol:(UnflowKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<UnflowKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (UnflowKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<UnflowKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<UnflowKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property UnflowKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface UnflowKtor_utilsTypeInfo : UnflowBase
- (instancetype)initWithType:(id<UnflowKotlinKClass>)type reifiedType:(id<UnflowKotlinKType>)reifiedType kotlinType:(id<UnflowKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (id<UnflowKotlinKClass>)component1 __attribute__((swift_name("component1()")));
- (id<UnflowKotlinKType>)component2 __attribute__((swift_name("component2()")));
- (id<UnflowKotlinKType> _Nullable)component3 __attribute__((swift_name("component3()")));
- (UnflowKtor_utilsTypeInfo *)doCopyType:(id<UnflowKotlinKClass>)type reifiedType:(id<UnflowKotlinKType>)reifiedType kotlinType:(id<UnflowKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<UnflowKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<UnflowKotlinKClass> type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol UnflowKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<UnflowKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<UnflowKotlinCoroutineContextElement> _Nullable)getKey_:(id<UnflowKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key_:)")));
- (id<UnflowKotlinCoroutineContext>)minusKeyKey:(id<UnflowKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<UnflowKotlinCoroutineContext>)plusContext:(id<UnflowKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol UnflowKotlinCoroutineContextElement <UnflowKotlinCoroutineContext>
@required
@property (readonly) id<UnflowKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol UnflowKotlinx_coroutines_coreJob <UnflowKotlinCoroutineContextElement>
@required
- (id<UnflowKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<UnflowKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause:(UnflowKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (UnflowKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<UnflowKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(UnflowKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<UnflowKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(UnflowKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<UnflowKotlinx_coroutines_coreJob>)plusOther:(id<UnflowKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<UnflowKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<UnflowKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface UnflowKtor_httpHttpMethod : UnflowBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (UnflowKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol UnflowKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol UnflowKotlinx_serialization_coreEncoder
@required
- (id<UnflowKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<UnflowKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<UnflowKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<UnflowKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<UnflowKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) UnflowKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol UnflowKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<UnflowKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<UnflowKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<UnflowKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) UnflowKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol UnflowKotlinx_serialization_coreDecoder
@required
- (id<UnflowKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<UnflowKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (UnflowKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<UnflowKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<UnflowKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) UnflowKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
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

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol UnflowKtor_client_coreHttpClientEngine <UnflowKotlinx_coroutines_coreCoroutineScope, UnflowKtor_ioCloseable>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(UnflowKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(UnflowKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(UnflowKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) UnflowKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) UnflowKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<UnflowKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface UnflowKtor_client_coreHttpClientEngineConfig : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property UnflowKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface UnflowKtor_eventsEvents : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(UnflowKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<UnflowKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(UnflowKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(UnflowKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end;

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface UnflowKtor_utilsPipeline<TSubject, TContext> : UnflowBase
- (instancetype)initWithPhase:(UnflowKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(UnflowKotlinArray<UnflowKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(UnflowKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(UnflowKtor_utilsPipelinePhase *)reference phase:(UnflowKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(UnflowKtor_utilsPipelinePhase *)reference phase:(UnflowKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(UnflowKtor_utilsPipelinePhase *)phase block:(id<UnflowKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(UnflowKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(UnflowKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(UnflowKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(UnflowKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<UnflowKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface UnflowKtor_client_coreHttpReceivePipeline : UnflowKtor_utilsPipeline<UnflowKtor_client_coreHttpResponse *, UnflowKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowKotlinArray<UnflowKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface UnflowKtor_client_coreHttpRequestPipeline : UnflowKtor_utilsPipeline<id, UnflowKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowKotlinArray<UnflowKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface UnflowKtor_client_coreHttpResponsePipeline : UnflowKtor_utilsPipeline<UnflowKtor_client_coreHttpResponseContainer *, UnflowKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowKotlinArray<UnflowKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface UnflowKtor_client_coreHttpSendPipeline : UnflowKtor_utilsPipeline<id, UnflowKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(UnflowKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<UnflowKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(UnflowKotlinArray<UnflowKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol UnflowKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(UnflowKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) UnflowKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol UnflowKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<UnflowKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol UnflowKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol UnflowKtor_httpHeaders <UnflowKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface UnflowKtor_httpUrl : UnflowBase
@property (class, readonly, getter=companion) UnflowKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property (readonly) NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property (readonly) NSString *encodedPath __attribute__((swift_name("encodedPath")));
@property (readonly) NSString *encodedPathAndQuery __attribute__((swift_name("encodedPathAndQuery")));
@property (readonly) NSString *encodedQuery __attribute__((swift_name("encodedQuery")));
@property (readonly) NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property (readonly) NSString *fragment __attribute__((swift_name("fragment")));
@property (readonly) NSString *host __attribute__((swift_name("host")));
@property (readonly) id<UnflowKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) UnflowKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end;

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface UnflowKtor_httpOutgoingContent : UnflowBase
- (id _Nullable)getPropertyKey:(UnflowKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(UnflowKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<UnflowKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) UnflowLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) UnflowKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<UnflowKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface UnflowKtor_utilsAttributeKey<T> : UnflowBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface UnflowKtor_httpURLProtocol : UnflowBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (UnflowKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol UnflowKtor_httpParameters <UnflowKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface UnflowKtor_httpURLBuilderCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol UnflowKtor_httpParametersBuilder <UnflowKtor_utilsStringValuesBuilder>
@required
@end;

__attribute__((swift_name("KotlinKType")))
@protocol UnflowKotlinKType
@required
@property (readonly) NSArray<UnflowKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<UnflowKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol UnflowKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol UnflowKotlinx_coroutines_coreChildHandle <UnflowKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(UnflowKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<UnflowKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol UnflowKotlinx_coroutines_coreChildJob <UnflowKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<UnflowKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol UnflowKotlinSequence
@required
- (id<UnflowKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol UnflowKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<UnflowKotlinx_coroutines_coreSelectInstance>)select block:(id<UnflowKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol UnflowKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface UnflowKtor_httpHttpMethodCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<UnflowKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) UnflowKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) UnflowKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) UnflowKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) UnflowKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) UnflowKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) UnflowKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) UnflowKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol UnflowKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<UnflowKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UnflowKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<UnflowKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) UnflowKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface UnflowKotlinx_serialization_coreSerializersModule : UnflowBase
- (void)dumpToCollector:(id<UnflowKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<UnflowKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<UnflowKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<UnflowKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<UnflowKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UnflowKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<UnflowKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<UnflowKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol UnflowKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface UnflowKotlinx_serialization_coreSerialKind : UnflowBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol UnflowKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<UnflowKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UnflowKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<UnflowKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<UnflowKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) UnflowKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface UnflowKotlinNothing : UnflowBase
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

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface UnflowKtor_client_coreHttpResponseData : UnflowBase
- (instancetype)initWithStatusCode:(UnflowKtor_httpHttpStatusCode *)statusCode requestTime:(UnflowKtor_utilsGMTDate *)requestTime headers:(id<UnflowKtor_httpHeaders>)headers version:(UnflowKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<UnflowKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<UnflowKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<UnflowKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) UnflowKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) UnflowKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) UnflowKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface UnflowKotlinAbstractCoroutineContextElement : UnflowBase <UnflowKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<UnflowKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<UnflowKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol UnflowKotlinContinuationInterceptor <UnflowKotlinCoroutineContextElement>
@required
- (id<UnflowKotlinContinuation>)interceptContinuationContinuation:(id<UnflowKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<UnflowKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface UnflowKotlinx_coroutines_coreCoroutineDispatcher : UnflowKotlinAbstractCoroutineContextElement <UnflowKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<UnflowKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<UnflowKotlinCoroutineContext>)context block:(id<UnflowKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<UnflowKotlinCoroutineContext>)context block:(id<UnflowKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<UnflowKotlinContinuation>)interceptContinuationContinuation:(id<UnflowKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<UnflowKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (UnflowKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (UnflowKotlinx_coroutines_coreCoroutineDispatcher *)plusOther_:(UnflowKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<UnflowKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface UnflowKtor_client_coreProxyConfig : UnflowBase
- (instancetype)initWithUrl:(UnflowKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface UnflowKtor_eventsEventDefinition<T> : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface UnflowKtor_utilsPipelinePhase : UnflowBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol UnflowKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol UnflowKotlinSuspendFunction2 <UnflowKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface UnflowKtor_client_coreHttpReceivePipelinePhases : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol UnflowKtor_httpHttpMessage
@required
@property (readonly) id<UnflowKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface UnflowKtor_client_coreHttpResponse : UnflowBase <UnflowKtor_httpHttpMessage, UnflowKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<UnflowKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) UnflowKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) UnflowKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) UnflowKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *version_ __attribute__((swift_name("version_")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface UnflowKtor_client_coreHttpRequestPipelinePhases : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) UnflowKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface UnflowKtor_client_coreHttpResponsePipelinePhases : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) UnflowKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface UnflowKtor_client_coreHttpResponseContainer : UnflowBase
- (instancetype)initWithExpectedType:(UnflowKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (UnflowKtor_utilsTypeInfo *)component1 __attribute__((swift_name("component1()")));
- (id)component2 __attribute__((swift_name("component2()")));
- (UnflowKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(UnflowKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface UnflowKtor_client_coreHttpClientCall : UnflowBase <UnflowKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(UnflowKtor_client_coreHttpClient *)client requestData:(UnflowKtor_client_coreHttpRequestData *)requestData responseData:(UnflowKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(UnflowKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(UnflowKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<UnflowKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<UnflowKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<UnflowKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property UnflowKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface UnflowKtor_client_coreHttpSendPipelinePhases : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) UnflowKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) UnflowKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface UnflowKtor_httpUrlCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface UnflowKtor_httpHeaderValueWithParameters : UnflowBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<UnflowKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<UnflowKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface UnflowKtor_httpContentType : UnflowKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<UnflowKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<UnflowKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(UnflowKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (UnflowKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (UnflowKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface UnflowKtor_httpHttpStatusCode : UnflowBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (UnflowKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface UnflowKtor_httpURLProtocolCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) UnflowKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) UnflowKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) UnflowKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) UnflowKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) UnflowKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, UnflowKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface UnflowKotlinKTypeProjection : UnflowBase
- (instancetype)initWithVariance:(UnflowKotlinKVariance * _Nullable)variance type:(id<UnflowKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (UnflowKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()")));
- (id<UnflowKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()")));
- (UnflowKotlinKTypeProjection *)doCopyVariance:(UnflowKotlinKVariance * _Nullable)variance type:(id<UnflowKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<UnflowKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) UnflowKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol UnflowKotlinx_coroutines_coreParentJob <UnflowKotlinx_coroutines_coreJob>
@required
- (UnflowKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol UnflowKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<UnflowKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(UnflowKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(UnflowKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<UnflowKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol UnflowKotlinSuspendFunction0 <UnflowKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol UnflowKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<UnflowKotlinKClass>)kClass provider:(id<UnflowKotlinx_serialization_coreKSerializer> (^)(NSArray<id<UnflowKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<UnflowKotlinKClass>)kClass serializer:(id<UnflowKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<UnflowKotlinKClass>)baseClass actualClass:(id<UnflowKotlinKClass>)actualClass actualSerializer:(id<UnflowKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<UnflowKotlinKClass>)baseClass defaultDeserializerProvider:(id<UnflowKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<UnflowKotlinKClass>)baseClass defaultDeserializerProvider:(id<UnflowKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<UnflowKotlinKClass>)baseClass defaultSerializerProvider:(id<UnflowKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface UnflowKotlinByteIterator : UnflowBase <UnflowKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (UnflowByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface UnflowKtor_utilsGMTDate : UnflowBase <UnflowKotlinComparable>
@property (class, readonly, getter=companion) UnflowKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(UnflowKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowKtor_utilsWeekDay *)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (int32_t)component6 __attribute__((swift_name("component6()")));
- (UnflowKtor_utilsMonth *)component7 __attribute__((swift_name("component7()")));
- (int32_t)component8 __attribute__((swift_name("component8()")));
- (int64_t)component9 __attribute__((swift_name("component9()")));
- (UnflowKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(UnflowKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(UnflowKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) UnflowKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) UnflowKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface UnflowKtor_httpHttpProtocolVersion : UnflowBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (UnflowKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol UnflowKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<UnflowKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface UnflowKotlinAbstractCoroutineContextKey<B, E> : UnflowBase <UnflowKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<UnflowKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<UnflowKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface UnflowKotlinx_coroutines_coreCoroutineDispatcherKey : UnflowKotlinAbstractCoroutineContextKey<id<UnflowKotlinContinuationInterceptor>, UnflowKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<UnflowKotlinCoroutineContextKey>)baseKey safeCast:(id<UnflowKotlinCoroutineContextElement> _Nullable (^)(id<UnflowKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol UnflowKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol UnflowKtor_ioByteReadChannel
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause_:(UnflowKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(UnflowLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(UnflowKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(UnflowLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(UnflowKtor_ioChunkBuffer *)dst completionHandler:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(UnflowKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(UnflowKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(UnflowBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(UnflowByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(UnflowDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(UnflowFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(UnflowKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(UnflowKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(UnflowInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(UnflowLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(UnflowKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(UnflowKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<UnflowKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(UnflowShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<UnflowKotlinSuspendFunction1>)consumer completionHandler:(void (^)(UnflowKotlinUnit * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<UnflowKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(UnflowBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) UnflowKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface UnflowKtor_client_coreHttpClientCallCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol UnflowKtor_client_coreHttpRequest <UnflowKtor_httpHttpMessage, UnflowKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<UnflowKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) UnflowKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) UnflowKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) UnflowKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) UnflowKtor_httpUrl *url __attribute__((swift_name("url")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface UnflowKtor_httpHeaderValueParam : UnflowBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (UnflowKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value __attribute__((swift_name("doCopy(name:value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface UnflowKtor_httpHeaderValueWithParametersCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<UnflowKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface UnflowKtor_httpContentTypeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) UnflowKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface UnflowKtor_httpHttpStatusCodeCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) UnflowKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) UnflowKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) UnflowKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) UnflowKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) UnflowKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) UnflowKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) UnflowKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) UnflowKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) UnflowKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) UnflowKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) UnflowKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) UnflowKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) UnflowKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) UnflowKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) UnflowKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) UnflowKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) UnflowKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) UnflowKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) UnflowKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) UnflowKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) UnflowKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) UnflowKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) UnflowKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) UnflowKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) UnflowKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) UnflowKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) UnflowKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) UnflowKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) UnflowKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) UnflowKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) UnflowKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) UnflowKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) UnflowKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) UnflowKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) UnflowKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) UnflowKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) UnflowKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) UnflowKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<UnflowKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface UnflowKotlinKVariance : UnflowKotlinEnum<UnflowKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) UnflowKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) UnflowKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) UnflowKotlinKVariance *out __attribute__((swift_name("out")));
+ (UnflowKotlinArray<UnflowKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface UnflowKotlinKTypeProjectionCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKotlinKTypeProjection *)contravariantType:(id<UnflowKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (UnflowKotlinKTypeProjection *)covariantType:(id<UnflowKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (UnflowKotlinKTypeProjection *)invariantType:(id<UnflowKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) UnflowKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface UnflowKotlinx_coroutines_coreAtomicDesc : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(UnflowKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(UnflowKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property UnflowKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface UnflowKotlinx_coroutines_coreOpDescriptor : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(UnflowKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : UnflowKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) UnflowKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface UnflowKtor_utilsGMTDateCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface UnflowKtor_utilsWeekDay : UnflowKotlinEnum<UnflowKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) UnflowKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (UnflowKotlinArray<UnflowKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface UnflowKtor_utilsMonth : UnflowKotlinEnum<UnflowKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) UnflowKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) UnflowKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) UnflowKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) UnflowKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) UnflowKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) UnflowKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) UnflowKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) UnflowKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) UnflowKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) UnflowKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) UnflowKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) UnflowKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (UnflowKotlinArray<UnflowKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface UnflowKtor_httpHttpProtocolVersionCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (UnflowKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) UnflowKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface UnflowKtor_ioMemory : UnflowBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(UnflowKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(UnflowKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (UnflowKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (UnflowKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end;

__attribute__((swift_name("Ktor_ioBuffer")))
@interface UnflowKtor_ioBuffer : UnflowBase
- (instancetype)initWithMemory:(UnflowKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (UnflowKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)duplicateToCopy:(UnflowKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (void)reserveEndGapEndGap:(int32_t)endGap __attribute__((swift_name("reserveEndGap(endGap:)")));
- (void)reserveStartGapStartGap:(int32_t)startGap __attribute__((swift_name("reserveStartGap(startGap:)")));
- (void)reset __attribute__((swift_name("reset()")));
- (void)resetForRead __attribute__((swift_name("resetForRead()")));
- (void)resetForWrite __attribute__((swift_name("resetForWrite()")));
- (void)resetForWriteLimit:(int32_t)limit __attribute__((swift_name("resetForWrite(limit:)")));
- (void)rewindCount:(int32_t)count __attribute__((swift_name("rewind(count:)")));
- (NSString *)description __attribute__((swift_name("description()")));
- (int32_t)tryPeekByte __attribute__((swift_name("tryPeekByte()")));
- (int32_t)tryReadByte __attribute__((swift_name("tryReadByte()")));
- (void)writeByteValue:(int8_t)value __attribute__((swift_name("writeByte(value:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@property (readonly) int32_t endGap __attribute__((swift_name("endGap")));
@property (readonly) int32_t limit __attribute__((swift_name("limit")));
@property (readonly) UnflowKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end;

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface UnflowKtor_ioChunkBuffer : UnflowKtor_ioBuffer
- (instancetype)initWithMemory:(UnflowKtor_ioMemory *)memory origin:(UnflowKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<UnflowKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(UnflowKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (UnflowKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (UnflowKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<UnflowKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next__) UnflowKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) UnflowKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end;

__attribute__((swift_name("Ktor_ioInput")))
@interface UnflowKtor_ioInput : UnflowBase <UnflowKtor_ioCloseable>
- (instancetype)initWithHead:(UnflowKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) UnflowKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));
- (UnflowKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(UnflowKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(UnflowKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(UnflowKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<UnflowKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<UnflowKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<UnflowKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface UnflowKtor_ioByteReadPacket : UnflowKtor_ioInput
- (instancetype)initWithHead:(UnflowKtor_ioChunkBuffer *)head pool:(id<UnflowKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(UnflowKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<UnflowKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) UnflowKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (UnflowKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));
- (UnflowKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));
- (int32_t)fillDestination:(UnflowKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol UnflowKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (UnflowKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol UnflowKotlinSuspendFunction1 <UnflowKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinAppendable")))
@protocol UnflowKotlinAppendable
@required
- (id<UnflowKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<UnflowKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<UnflowKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface UnflowKotlinx_coroutines_coreAtomicOp<__contravariant T> : UnflowKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) UnflowKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface UnflowKotlinx_coroutines_coreLockFreeLinkedListNode : UnflowBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(UnflowBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(UnflowBoolean *(^)(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(UnflowBoolean *(^)(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(UnflowBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(UnflowBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next__) id next __attribute__((swift_name("next")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : UnflowKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(UnflowKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)failureAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(UnflowKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
- (BOOL)retryAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface UnflowKtor_utilsWeekDayCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UnflowKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface UnflowKtor_utilsMonthCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (UnflowKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (UnflowKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface UnflowKtor_ioMemoryCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface UnflowKtor_ioBufferCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end;

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol UnflowKtor_ioObjectPool <UnflowKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface UnflowKtor_ioChunkBufferCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<UnflowKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<UnflowKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface UnflowKtor_ioInputCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface UnflowKtor_ioByteReadPacketCompanion : UnflowBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) UnflowKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) UnflowKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishOnSuccessAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : UnflowKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (id _Nullable)failureAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));
- (void)finishOnSuccessAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (BOOL)retryAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));
- (UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(UnflowKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) UnflowKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
