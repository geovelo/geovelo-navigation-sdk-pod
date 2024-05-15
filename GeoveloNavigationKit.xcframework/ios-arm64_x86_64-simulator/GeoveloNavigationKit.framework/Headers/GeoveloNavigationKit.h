#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class GNKClientOptions, GNKGeoveloSdkCompanion, GNKNavigationManager, GNKGeoSegment, GNKGeoPoint, GNKItinerarySegmentCompanion, GNKItinerarySegment, GNKItinerarySection, GNKItinerary, GNKNavigationEngineCompanion, GNKRecalculationBehavior, GNKNavigationProgress, GNKItineraryInstruction, GNKGeoSegmentQuadTree, GNKKotlinx_datetimeInstant, GNKWaypoint, GNKNavigationManagerCompanion, GNKGeoLocation, GNKNavigationProgressCompanion, GNKKotlinEnumCompanion, GNKKotlinEnum<E>, GNKRecalculationBehaviorCompanion, GNKKotlinArray<T>, GNKKotlinThrowable, GNKKotlinException, GNKItineraryType, GNKRoadTypeDistances, GNKItineraryCompanion, GNKItineraryBikeProfile, GNKItineraryBikeType, GNKBounds, GNKItineraryElevation, GNKItineraryRoadCyclingQuality, GNKTransportMode, GNKItineraryBikeMotorTypeCompanion, GNKItineraryBikeMotorType, GNKItineraryBikeProfileCompanion, GNKItineraryBikeTypeCompanion, GNKItinerarySectionEnergy, GNKItineraryEBikeEnergiesCompanion, GNKItineraryEBikeEnergies, GNKItineraryElevationCompanion, GNKItineraryInstructionRoadType, GNKItineraryFacilityCompanion, GNKItineraryFacility, GNKItineraryInstructionType, GNKItineraryInstructionCardinalDirection, GNKItineraryInstructionCompanion, GNKItineraryInstructionCardinalDirectionCompanion, GNKItineraryInstructionRoadTypeCompanion, GNKItineraryInstructionTypeCompanion, GNKItineraryLoopTypeCompanion, GNKItineraryLoopType, GNKItineraryPublicTransportStopPointCompanion, GNKItineraryPublicTransportStopPoint, GNKItineraryRequestCompanion, GNKItineraryRequest, GNKItineraryRequestBikeDetails, GNKItineraryRequestNavigationDetails, GNKItineraryRequestLoopDetails, GNKItineraryRequestBuilderCompanion, GNKItineraryRequestBuilder, GNKItineraryRequestBikeDetailsCompanion, GNKItineraryRequestLoopDetailsCompanion, GNKItineraryRequestNavigationDetailsCompanion, GNKItineraryRoadCyclingQualityType, GNKItineraryRoadCyclingQualityCompanion, GNKItineraryRoadCyclingQualityTypeCompanion, GNKItinerarySectionDetails, GNKItinerarySectionCompanion, GNKItinerarySectionBikeDetails, GNKItinerarySectionPedestrianDetails, GNKItinerarySectionPublicTransportDetails, GNKItinerarySectionBikeStations, GNKItinerarySectionBikeDetailsCompanion, GNKItinerarySectionBikeStationFromToCompanion, GNKItinerarySectionBikeStationFromTo, GNKItinerarySectionBikeStationsCompanion, GNKItinerarySectionRideSet, GNKItinerarySectionDetailsCompanion, GNKItinerarySectionEnergyCompanion, GNKItinerarySectionPedestrianDetailsCompanion, GNKItinerarySectionPublicTransportDetailsCompanion, GNKItinerarySectionRideSetCompanion, GNKItineraryTypeCompanion, GNKRoadTypeDistancesCompanion, GNKTransportModeCompanion, GNKPreconfiguredHttpClient, GNKItineraryClientContractCompanion, GNKKtor_client_coreHttpClient, GNKItineraryClientContract, GNKEncodedElevationsSerializer, GNKEncodedFacilitiesSerializer, GNKEncodedInstructionsSerializer, GNKEncodedInstructionsSerializerEncodedInstructionHeader, GNKEncodedLineStringSerializer, GNKEncodedRoadCyclingQualitiesSerializer, GNKItineraryBikeTypeSerializer, GNKGeometryEncoderCompanion, GNKRequestBuilderExceptionCompanion, GNKRequestBuilderExceptionType, GNKRequestBuilderException, GNKBoundsCompanion, GNKGeoLocationCompanion, GNKGeoPointCompanion, GNKGeoSegmentCompanion, GNKGeoSegmentQuadTreeCompanion, GNKWaypointCompanion, GNKKotlinRuntimeException, GNKKtor_httpHttpStatusCode, GNKInstantSerializer, GNKIntSerializer, GNKJsonDefaultsCompanion, GNKKotlinx_serialization_jsonJson, GNKInstantParceler, CLLocation, GNKKtor_client_coreHttpClientCall, GNKKtor_utilsGMTDate, GNKKtor_httpHttpProtocolVersion, GNKKtor_client_coreHttpResponse, GNKResource, GNKKotlinx_datetimeInstantCompanion, GNKKtor_client_coreHttpClientEngineConfig, GNKKtor_client_coreHttpClientConfig<T>, GNKKtor_eventsEvents, GNKKtor_client_coreHttpReceivePipeline, GNKKtor_client_coreHttpRequestPipeline, GNKKtor_client_coreHttpResponsePipeline, GNKKtor_client_coreHttpSendPipeline, GNKKotlinx_serialization_coreSerializersModule, GNKKotlinx_serialization_coreSerialKind, GNKKotlinNothing, GNKKtor_httpHttpStatusCodeCompanion, GNKKotlinx_serialization_jsonJsonDefault, GNKKotlinx_serialization_jsonJsonElement, GNKKotlinx_serialization_jsonJsonConfiguration, GNKKtor_client_coreHttpRequestData, GNKKtor_client_coreHttpResponseData, GNKKtor_client_coreHttpClientCallCompanion, GNKKtor_utilsTypeInfo, GNKKtor_ioMemory, GNKKtor_ioChunkBuffer, GNKKotlinByteArray, GNKKtor_ioBuffer, GNKKtor_ioByteReadPacket, GNKKtor_utilsGMTDateCompanion, GNKKtor_utilsWeekDay, GNKKtor_utilsMonth, GNKKtor_httpHttpProtocolVersionCompanion, GNKKotlinx_coroutines_coreCoroutineDispatcher, GNKKtor_client_coreProxyConfig, GNKKtor_utilsAttributeKey<T>, GNKKtor_eventsEventDefinition<T>, GNKKtor_utilsPipelinePhase, GNKKtor_utilsPipeline<TSubject, TContext>, GNKKtor_client_coreHttpReceivePipelinePhases, GNKKotlinUnit, GNKKtor_client_coreHttpRequestPipelinePhases, GNKKtor_client_coreHttpRequestBuilder, GNKKtor_client_coreHttpResponsePipelinePhases, GNKKtor_client_coreHttpResponseContainer, GNKKtor_client_coreHttpSendPipelinePhases, GNKKotlinx_serialization_jsonJsonElementCompanion, GNKKtor_httpUrl, GNKKtor_httpHttpMethod, GNKKtor_httpOutgoingContent, GNKKotlinIllegalStateException, GNKKtor_ioMemoryCompanion, GNKKtor_ioBufferCompanion, GNKKtor_ioChunkBufferCompanion, GNKKotlinByteIterator, GNKKtor_ioInputCompanion, GNKKtor_ioInput, GNKKtor_ioByteReadPacketCompanion, GNKKtor_utilsWeekDayCompanion, GNKKtor_utilsMonthCompanion, GNKKotlinAbstractCoroutineContextElement, GNKKotlinx_coroutines_coreCoroutineDispatcherKey, GNKKtor_httpHeadersBuilder, GNKKtor_client_coreHttpRequestBuilderCompanion, GNKKtor_httpURLBuilder, GNKKtor_httpUrlCompanion, GNKKtor_httpURLProtocol, GNKKtor_httpHttpMethodCompanion, GNKKtor_httpContentType, GNKKotlinCancellationException, GNKKotlinKTypeProjection, GNKKotlinAbstractCoroutineContextKey<B, E>, GNKKtor_utilsStringValuesBuilderImpl, GNKKtor_httpURLBuilderCompanion, GNKKtor_httpURLProtocolCompanion, GNKKtor_httpHeaderValueParam, GNKKtor_httpHeaderValueWithParametersCompanion, GNKKtor_httpHeaderValueWithParameters, GNKKtor_httpContentTypeCompanion, GNKKotlinKVariance, GNKKotlinKTypeProjectionCompanion, GNKKotlinx_coroutines_coreAtomicDesc, GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp, GNKKotlinx_coroutines_coreAtomicOp<__contravariant T>, GNKKotlinx_coroutines_coreOpDescriptor, GNKKotlinx_coroutines_coreLockFreeLinkedListNode, GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc, GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T>, GNKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T>;

@protocol GNKExceptionHandler, GNKLogHandler, GNKItineraryClient, GNKCommonParcelable, GNKGeoSegmentable, GNKKotlinx_serialization_coreKSerializer, GNKNavigationLifecycleListener, GNKNavigationProgressListener, GNKNavigationRecalculateListener, GNKKotlinComparable, GNKUserAuthorizationProvider, GNKItineraryListCallback, GNKItineraryCallback, GNKKotlinCoroutineContext, GNKKotlinx_serialization_coreEncoder, GNKKotlinx_serialization_coreSerialDescriptor, GNKKotlinx_serialization_coreSerializationStrategy, GNKKotlinx_serialization_coreDecoder, GNKKotlinx_serialization_coreDeserializationStrategy, GNKCommonParceler, GNKKtor_httpHeaders, GNKKtor_httpHttpMessage, GNKKotlinx_coroutines_coreCoroutineScope, GNKKtor_ioByteReadChannel, GNKKotlinIterator, GNKKtor_ioCloseable, GNKKtor_client_coreHttpClientEngine, GNKKtor_client_coreHttpClientEngineCapability, GNKKtor_utilsAttributes, GNKKotlinCoroutineContextElement, GNKKotlinCoroutineContextKey, GNKKotlinx_serialization_coreCompositeEncoder, GNKKotlinAnnotation, GNKKotlinx_serialization_coreCompositeDecoder, GNKKotlinx_serialization_coreSerialFormat, GNKKotlinx_serialization_coreStringFormat, GNKKotlinMapEntry, GNKKtor_utilsStringValues, GNKKtor_client_coreHttpRequest, GNKKtor_ioReadSession, GNKKotlinSuspendFunction1, GNKKotlinAppendable, GNKKtor_client_coreHttpClientPlugin, GNKKotlinx_coroutines_coreDisposableHandle, GNKKotlinSuspendFunction2, GNKKotlinx_serialization_coreSerializersModuleCollector, GNKKotlinKClass, GNKKotlinx_coroutines_coreJob, GNKKotlinKType, GNKKtor_ioObjectPool, GNKKotlinFunction, GNKKotlinContinuation, GNKKotlinContinuationInterceptor, GNKKotlinx_coroutines_coreRunnable, GNKKtor_httpHttpMessageBuilder, GNKKotlinKDeclarationContainer, GNKKotlinKAnnotatedElement, GNKKotlinKClassifier, GNKKtor_httpParameters, GNKKotlinx_coroutines_coreChildHandle, GNKKotlinx_coroutines_coreChildJob, GNKKotlinSequence, GNKKotlinx_coroutines_coreSelectClause0, GNKKtor_utilsStringValuesBuilder, GNKKtor_httpParametersBuilder, GNKKotlinx_coroutines_coreParentJob, GNKKotlinx_coroutines_coreSelectInstance, GNKKotlinSuspendFunction0;

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
@interface GNKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end

@interface GNKBase (GNKBaseCopying) <NSCopying>
@end

__attribute__((swift_name("KotlinMutableSet")))
@interface GNKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end

__attribute__((swift_name("KotlinMutableDictionary")))
@interface GNKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end

@interface NSError (NSErrorGNKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end

__attribute__((swift_name("KotlinNumber")))
@interface GNKNumber : NSNumber
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
@end

__attribute__((swift_name("KotlinByte")))
@interface GNKByte : GNKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end

__attribute__((swift_name("KotlinUByte")))
@interface GNKUByte : GNKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end

__attribute__((swift_name("KotlinShort")))
@interface GNKShort : GNKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end

__attribute__((swift_name("KotlinUShort")))
@interface GNKUShort : GNKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end

__attribute__((swift_name("KotlinInt")))
@interface GNKInt : GNKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end

__attribute__((swift_name("KotlinUInt")))
@interface GNKUInt : GNKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end

__attribute__((swift_name("KotlinLong")))
@interface GNKLong : GNKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end

__attribute__((swift_name("KotlinULong")))
@interface GNKULong : GNKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end

__attribute__((swift_name("KotlinFloat")))
@interface GNKFloat : GNKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end

__attribute__((swift_name("KotlinDouble")))
@interface GNKDouble : GNKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end

__attribute__((swift_name("KotlinBoolean")))
@interface GNKBoolean : GNKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoveloSdk")))
@interface GNKGeoveloSdk : GNKBase
- (instancetype)initWithApiKey:(NSString *)apiKey exceptionHandler:(id<GNKExceptionHandler>)exceptionHandler logHandler:(id<GNKLogHandler>)logHandler clientOptions:(GNKClientOptions *)clientOptions __attribute__((swift_name("init(apiKey:exceptionHandler:logHandler:clientOptions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKGeoveloSdkCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) GNKClientOptions *clientOptions __attribute__((swift_name("clientOptions")));
@property id<GNKExceptionHandler> exceptionHandler __attribute__((swift_name("exceptionHandler")));
@property (readonly) id<GNKItineraryClient> itineraryClient __attribute__((swift_name("itineraryClient")));
@property id<GNKLogHandler> logHandler __attribute__((swift_name("logHandler")));
@property (readonly) GNKNavigationManager *navigationManager __attribute__((swift_name("navigationManager")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoveloSdk.Companion")))
@interface GNKGeoveloSdkCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeoveloSdkCompanion *shared __attribute__((swift_name("shared")));
@property id<GNKExceptionHandler> exceptionHandler __attribute__((swift_name("exceptionHandler")));
@property id<GNKLogHandler> logHandler __attribute__((swift_name("logHandler")));
@end

__attribute__((swift_name("CommonParcelable")))
@protocol GNKCommonParcelable
@required
@end

__attribute__((swift_name("GeoSegmentable")))
@protocol GNKGeoSegmentable
@required
- (GNKGeoSegment *)getSegment __attribute__((swift_name("getSegment()")));
@end


/**
 * Navigation related
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySegment")))
@interface GNKItinerarySegment : GNKBase <GNKCommonParcelable, GNKGeoSegmentable>
- (instancetype)initWithSectionIndex:(int32_t)sectionIndex instructionIndex:(int32_t)instructionIndex start:(GNKGeoPoint *)start startIndex:(int32_t)startIndex end:(GNKGeoPoint *)end endIndex:(int32_t)endIndex distance:(double)distance distanceFromSectionStart:(double)distanceFromSectionStart distanceToNextInstruction:(double)distanceToNextInstruction __attribute__((swift_name("init(sectionIndex:instructionIndex:start:startIndex:end:endIndex:distance:distanceFromSectionStart:distanceToNextInstruction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySegmentCompanion *companion __attribute__((swift_name("companion")));

/**
 * Navigation related
 */
- (GNKItinerarySegment *)doCopySectionIndex:(int32_t)sectionIndex instructionIndex:(int32_t)instructionIndex start:(GNKGeoPoint *)start startIndex:(int32_t)startIndex end:(GNKGeoPoint *)end endIndex:(int32_t)endIndex distance:(double)distance distanceFromSectionStart:(double)distanceFromSectionStart distanceToNextInstruction:(double)distanceToNextInstruction __attribute__((swift_name("doCopy(sectionIndex:instructionIndex:start:startIndex:end:endIndex:distance:distanceFromSectionStart:distanceToNextInstruction:)")));

/**
 * Navigation related
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (GNKGeoSegment *)getSegment __attribute__((swift_name("getSegment()")));

/**
 * Navigation related
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (double)projectedSectionCompletionLocation:(GNKGeoPoint * _Nullable)location section:(GNKItinerarySection * _Nullable)section __attribute__((swift_name("projectedSectionCompletion(location:section:)")));

/**
 * Navigation related
 */
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * distance entre start et end (en mètres)
 */
@property double distance __attribute__((swift_name("distance")));

/**
 * distance cumulée de la section jusqu’à ce segment
 */
@property double distanceFromSectionStart __attribute__((swift_name("distanceFromSectionStart")));

/**
 * distance jusqu’à la prochaine instruction
 */
@property double distanceToNextInstruction __attribute__((swift_name("distanceToNextInstruction")));

/**
 * point d'arrivée du segment
 */
@property GNKGeoPoint *end __attribute__((swift_name("end")));

/**
 * numéro du point associé dans la liste geometry de l’itinéraire
 */
@property int32_t endIndex __attribute__((swift_name("endIndex")));

/**
 * numéro de l’instruction associée dans la liste itinerary.instructions de la section de l’itinéraire
 */
@property int32_t instructionIndex __attribute__((swift_name("instructionIndex")));

/**
 * numéro de l’instruction associée dans la liste itinerary.instructions de la section de l’itinéraire
 */
@property int32_t sectionIndex __attribute__((swift_name("sectionIndex")));

/**
 * point de départ du segment
 */
@property GNKGeoPoint *start __attribute__((swift_name("start")));

/**
 * numéro du point associé dans la liste geometry de l’itinéraire
 */
@property int32_t startIndex __attribute__((swift_name("startIndex")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySegment.Companion")))
@interface GNKItinerarySegmentCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySegmentCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<GNKItinerarySegment *> *)fromSectionSection:(GNKItinerarySection *)section __attribute__((swift_name("fromSection(section:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEngine")))
@interface GNKNavigationEngine : GNKBase
- (instancetype)initWithItineraries:(NSArray<GNKItinerary *> *)itineraries currentItinerary:(GNKItinerary *)currentItinerary exceptionListener:(id<GNKExceptionHandler>)exceptionListener logHandler:(id<GNKLogHandler>)logHandler __attribute__((swift_name("init(itineraries:currentItinerary:exceptionListener:logHandler:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKNavigationEngineCompanion *companion __attribute__((swift_name("companion")));
- (double)averageSpeedSinceNavigationStarted __attribute__((swift_name("averageSpeedSinceNavigationStarted()")));
- (void)continueNavigationUsingNextItinerary __attribute__((swift_name("continueNavigationUsingNextItinerary()")));
- (void)continueNavigationUsingNextSection __attribute__((swift_name("continueNavigationUsingNextSection()")));
- (void)continueNavigationUsingRecalculatedItineraryItinerary:(GNKItinerary *)itinerary behavior:(GNKRecalculationBehavior * _Nullable)behavior __attribute__((swift_name("continueNavigationUsingRecalculatedItinerary(itinerary:behavior:)")));
- (int64_t)distanceSinceNavigationStarted __attribute__((swift_name("distanceSinceNavigationStarted()")));
- (GNKNavigationProgress *)generateNavigationProgressLocation:(GNKGeoPoint *)location itinerary:(GNKItinerary *)itinerary segments:(NSArray<GNKItinerarySegment *> *)segments nearestSegment:(GNKItinerarySegment *)nearestSegment __attribute__((swift_name("generateNavigationProgress(location:itinerary:segments:nearestSegment:)")));

/**
 * @note This method converts instances of NavigationOffTrackException, NavigationNotReadyException, IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)generateNavigationProgressFromGeoPointGeoPoint:(GNKGeoPoint *)geoPoint error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("generateNavigationProgressFromGeoPoint(geoPoint:)")));
- (BOOL)hasNextItinerary __attribute__((swift_name("hasNextItinerary()")));
- (BOOL)hasNextSection __attribute__((swift_name("hasNextSection()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)prepareNavigationItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("prepareNavigation(itinerary:)")));

/**
 * @note This method converts instances of NavigationOffTrackException, NavigationNotReadyException, IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressInstruction:(GNKItineraryInstruction *)instruction error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgress(instruction:)")));

/**
 * @note This method converts instances of NavigationNotReadyException, IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressAtEndAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgressAtEnd()")));

/**
 * @note This method converts instances of NavigationNotReadyException, IllegalArgumentException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressAtStartAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgressAtStart()")));

/**
 * Start/Prepare the navigation
 *
 * @param itineraries Itineraries that are not optional or variant itineraries
 * @param itinerary   The itinerary_json to begin with
 */
- (void)startNavigationItineraries:(NSArray<GNKItinerary *> *)itineraries itinerary:(GNKItinerary *)itinerary __attribute__((swift_name("startNavigation(itineraries:itinerary:)")));
- (int64_t)timeSinceNavigationStarted __attribute__((swift_name("timeSinceNavigationStarted()")));

/**
 * @note This method converts instances of NavigationOffTrackException, NavigationNotReadyException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)updateLocationLocation:(GNKGeoPoint *)location error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("updateLocation(location:)"))) __attribute__((swift_error(nonnull_error)));
@property int64_t averageSpeedSinceNavigationStarted_nbSpeed __attribute__((swift_name("averageSpeedSinceNavigationStarted_nbSpeed")));
@property double averageSpeedSinceNavigationStarted_totalSpeed __attribute__((swift_name("averageSpeedSinceNavigationStarted_totalSpeed")));
@property GNKItinerary *currentItinerary __attribute__((swift_name("currentItinerary")));
@property (readonly) GNKNavigationProgress * _Nullable currentProgress __attribute__((swift_name("currentProgress")));
@property GNKItinerarySection *currentSection __attribute__((swift_name("currentSection")));
@property double currentSectionCompletion __attribute__((swift_name("currentSectionCompletion")));
@property (getter=distanceSinceNavigationStarted_) int64_t distanceSinceNavigationStarted __attribute__((swift_name("distanceSinceNavigationStarted")));
@property id<GNKExceptionHandler> exceptionListener __attribute__((swift_name("exceptionListener")));
@property NSArray<GNKItinerary *> *itineraries __attribute__((swift_name("itineraries")));
@property id<GNKLogHandler> logHandler __attribute__((swift_name("logHandler")));
@property NSMutableArray<GNKNavigationProgress *> *navigationProgressHistory __attribute__((swift_name("navigationProgressHistory")));
@property (readonly) GNKItinerary * _Nullable nextItinerary __attribute__((swift_name("nextItinerary")));
@property (readonly) GNKItinerarySection * _Nullable nextSection __attribute__((swift_name("nextSection")));
@property GNKGeoSegmentQuadTree *quadTree __attribute__((swift_name("quadTree")));
@property NSMutableArray<NSMutableArray<GNKItinerarySegment *> *> *segmentsBySection __attribute__((swift_name("segmentsBySection")));
@property GNKKotlinx_datetimeInstant *startDate __attribute__((swift_name("startDate")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationEngine.Companion")))
@interface GNKNavigationEngineCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKNavigationEngineCompanion *shared __attribute__((swift_name("shared")));
- (double)calculateSpeedLastProgresses:(NSArray<GNKNavigationProgress *> *)lastProgresses __attribute__((swift_name("calculateSpeed(lastProgresses:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (NSArray<id<GNKGeoSegmentable>> *)nearbySegmentsLocation:(GNKGeoPoint *)location quadTree:(GNKGeoSegmentQuadTree *)quadTree __attribute__((swift_name("nearbySegments(location:quadTree:)")));
- (id<GNKGeoSegmentable> _Nullable)selectNearestSegmentLocation:(GNKGeoPoint *)location segments:(NSArray<id<GNKGeoSegmentable>> *)segments currentSection:(GNKItinerarySection *)currentSection currentSectionCompletion:(double)currentSectionCompletion ignoreCompletionAtStart:(BOOL)ignoreCompletionAtStart __attribute__((swift_name("selectNearestSegment(location:segments:currentSection:currentSectionCompletion:ignoreCompletionAtStart:)")));
@property (readonly) double COMPLETION_DIFF_MAX_DISTANCE __attribute__((swift_name("COMPLETION_DIFF_MAX_DISTANCE")));
@property (readonly) int32_t DISTANCE_NAVIGATION_POSSIBLE __attribute__((swift_name("DISTANCE_NAVIGATION_POSSIBLE")));
@property (readonly) int32_t NB_METERS_AWAY_TO_BE_CONSIDERATED_AS_TOO_FAR __attribute__((swift_name("NB_METERS_AWAY_TO_BE_CONSIDERATED_AS_TOO_FAR")));
@property (readonly) int32_t NB_METERS_BEFORE_DISPLAY_NAVIGATION_POPUP __attribute__((swift_name("NB_METERS_BEFORE_DISPLAY_NAVIGATION_POPUP")));
@property (readonly) int32_t NB_METERS_MAX_TO_ATTACH_LOCATION_TO_ITINERARY __attribute__((swift_name("NB_METERS_MAX_TO_ATTACH_LOCATION_TO_ITINERARY")));
@property (readonly) int32_t NB_METERS_REACH_SOMEWHERE __attribute__((swift_name("NB_METERS_REACH_SOMEWHERE")));
@property (readonly) int32_t NEARBY_SEGMENTS_MAX_DISTANCE __attribute__((swift_name("NEARBY_SEGMENTS_MAX_DISTANCE")));
@property (readonly) double SECTION_COMPLETION_INITIAL_VALUE __attribute__((swift_name("SECTION_COMPLETION_INITIAL_VALUE")));
@end

__attribute__((swift_name("NavigationLifecycleListener")))
@protocol GNKNavigationLifecycleListener
@required
- (void)onNavigationContinueOnNextItineraryItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("onNavigationContinueOnNextItinerary(itinerary:)")));
- (void)onNavigationContinueOnNextSectionSection:(GNKItinerarySection *)section __attribute__((swift_name("onNavigationContinueOnNextSection(section:)")));
- (void)onNavigationPaused __attribute__((swift_name("onNavigationPaused()")));
- (void)onNavigationReachedArrivalCurrentItinerary:(GNKItinerary *)currentItinerary currentSection:(GNKItinerarySection *)currentSection __attribute__((swift_name("onNavigationReachedArrival(currentItinerary:currentSection:)")));
- (void)onNavigationReachedEndOfIntermediateItineraryCurrentItinerary:(GNKItinerary *)currentItinerary nextItinerary:(GNKItinerary *)nextItinerary __attribute__((swift_name("onNavigationReachedEndOfIntermediateItinerary(currentItinerary:nextItinerary:)")));
- (void)onNavigationReachedEndOfIntermediateSectionCurrentSection:(GNKItinerarySection *)currentSection nextSection:(GNKItinerarySection *)nextSection __attribute__((swift_name("onNavigationReachedEndOfIntermediateSection(currentSection:nextSection:)")));
- (void)onNavigationReachedIntermediateWaypointWaypoint:(GNKWaypoint *)waypoint __attribute__((swift_name("onNavigationReachedIntermediateWaypoint(waypoint:)")));
- (void)onNavigationResumed __attribute__((swift_name("onNavigationResumed()")));
- (void)onNavigationStartedItinerary:(GNKItinerary *)itinerary section:(GNKItinerarySection *)section __attribute__((swift_name("onNavigationStarted(itinerary:section:)")));
- (void)onNavigationStopped __attribute__((swift_name("onNavigationStopped()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationManager")))
@interface GNKNavigationManager : GNKBase
- (instancetype)initWithItineraryClient:(id<GNKItineraryClient>)itineraryClient exceptionListener:(id<GNKExceptionHandler>)exceptionListener logHandler:(id<GNKLogHandler>)logHandler __attribute__((swift_name("init(itineraryClient:exceptionListener:logHandler:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKNavigationManagerCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canContinueOnNextItinerary __attribute__((swift_name("canContinueOnNextItinerary()")));
- (BOOL)canContinueOnNextSection __attribute__((swift_name("canContinueOnNextSection()")));
- (void)clearNotified __attribute__((swift_name("clearNotified()")));
- (void)continueOnNextItinerary __attribute__((swift_name("continueOnNextItinerary()")));
- (void)continueOnNextSection __attribute__((swift_name("continueOnNextSection()")));
- (void)pauseNavigation __attribute__((swift_name("pauseNavigation()")));

/**
 * @note This method converts instances of NavigationOffTrackException, NavigationNotReadyException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressInstruction:(GNKItineraryInstruction *)instruction error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgress(instruction:)"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of NavigationNotReadyException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressAtEndAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgressAtEnd()"))) __attribute__((swift_error(nonnull_error)));

/**
 * @note This method converts instances of NavigationNotReadyException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKNavigationProgress * _Nullable)previewNavigationProgressAtStartAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("previewNavigationProgressAtStart()"))) __attribute__((swift_error(nonnull_error)));
- (void)recalculateLocation:(GNKWaypoint *)location __attribute__((swift_name("recalculate(location:)")));
- (void)recalculateLocation:(GNKWaypoint *)location geometry:(NSArray<GNKGeoPoint *> * _Nullable)geometry behavior:(GNKRecalculationBehavior *)behavior __attribute__((swift_name("recalculate(location:geometry:behavior:)")));
- (void)resumeNavigation __attribute__((swift_name("resumeNavigation()")));
- (void)startNavigationFirstItinerary:(GNKItinerary *)firstItinerary __attribute__((swift_name("startNavigation(firstItinerary:)")));
- (void)startNavigationItineraries:(NSArray<GNKItinerary *> *)itineraries firstItinerary:(GNKItinerary *)firstItinerary __attribute__((swift_name("startNavigation(itineraries:firstItinerary:)")));
- (void)stopNavigation __attribute__((swift_name("stopNavigation()")));

/**
 * @param location
 * This function is private but an wrapper to this function
 * is implemented on each plateform to support the conversion
 * of the plateform location object to GeoLocation
 */
- (void)updateLocationLocation:(GNKGeoLocation *)location __attribute__((swift_name("updateLocation(location:)")));
@property (readonly) GNKItinerary * _Nullable currentItinerary __attribute__((swift_name("currentItinerary")));
@property (readonly) GNKNavigationProgress * _Nullable currentProgress __attribute__((swift_name("currentProgress")));
@property (readonly) GNKItinerarySection * _Nullable currentSection __attribute__((swift_name("currentSection")));
@property id<GNKExceptionHandler> exceptionListener __attribute__((swift_name("exceptionListener")));
@property (readonly) BOOL isOffTrack __attribute__((swift_name("isOffTrack")));
@property (readonly) BOOL isRecalculating __attribute__((swift_name("isRecalculating")));
@property (readonly) BOOL isRunning __attribute__((swift_name("isRunning")));
@property (readonly) BOOL isStarted __attribute__((swift_name("isStarted")));
@property (readonly) NSArray<GNKItinerary *> *itineraries __attribute__((swift_name("itineraries")));
@property id<GNKItineraryClient> itineraryClient __attribute__((swift_name("itineraryClient")));
@property NSMutableArray<id<GNKNavigationLifecycleListener>> *lifecycleListeners __attribute__((swift_name("lifecycleListeners")));
@property id<GNKLogHandler> logHandler __attribute__((swift_name("logHandler")));
@property NSMutableArray<id<GNKNavigationProgressListener>> *progressListeners __attribute__((swift_name("progressListeners")));
@property NSMutableArray<id<GNKNavigationRecalculateListener>> *recalculateListeners __attribute__((swift_name("recalculateListeners")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationManager.Companion")))
@interface GNKNavigationManagerCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKNavigationManagerCompanion *shared __attribute__((swift_name("shared")));
- (GNKNavigationManager *)getInstanceClient:(id<GNKItineraryClient>)client exceptionListener:(id<GNKExceptionHandler>)exceptionListener logHandler:(id<GNKLogHandler>)logHandler __attribute__((swift_name("getInstance(client:exceptionListener:logHandler:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationProgress")))
@interface GNKNavigationProgress : GNKBase <GNKCommonParcelable>
- (instancetype)initWithCreated:(GNKKotlinx_datetimeInstant *)created currentInstruction:(GNKItineraryInstruction *)currentInstruction nextInstruction:(GNKItineraryInstruction * _Nullable)nextInstruction previousInstruction:(GNKItineraryInstruction * _Nullable)previousInstruction currentSegment:(GNKItinerarySegment *)currentSegment currentItinerary:(GNKItinerary *)currentItinerary distanceToNextInstruction:(double)distanceToNextInstruction distanceToNextSection:(double)distanceToNextSection distanceToNextItinerary:(double)distanceToNextItinerary isLastItineraryInstruction:(BOOL)isLastItineraryInstruction isLastSectionInstruction:(BOOL)isLastSectionInstruction distanceToArrival:(double)distanceToArrival timeToArrival:(int64_t)timeToArrival snappedLocation:(GNKGeoPoint *)snappedLocation realLocation:(GNKGeoPoint *)realLocation estimatedDateOfArrival:(GNKKotlinx_datetimeInstant *)estimatedDateOfArrival speed:(double)speed nextSection:(GNKItinerarySection * _Nullable)nextSection nextItinerary:(GNKItinerary * _Nullable)nextItinerary currentSection:(GNKItinerarySection *)currentSection __attribute__((swift_name("init(created:currentInstruction:nextInstruction:previousInstruction:currentSegment:currentItinerary:distanceToNextInstruction:distanceToNextSection:distanceToNextItinerary:isLastItineraryInstruction:isLastSectionInstruction:distanceToArrival:timeToArrival:snappedLocation:realLocation:estimatedDateOfArrival:speed:nextSection:nextItinerary:currentSection:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKNavigationProgressCompanion *companion __attribute__((swift_name("companion")));
- (GNKNavigationProgress *)doCopyCreated:(GNKKotlinx_datetimeInstant *)created currentInstruction:(GNKItineraryInstruction *)currentInstruction nextInstruction:(GNKItineraryInstruction * _Nullable)nextInstruction previousInstruction:(GNKItineraryInstruction * _Nullable)previousInstruction currentSegment:(GNKItinerarySegment *)currentSegment currentItinerary:(GNKItinerary *)currentItinerary distanceToNextInstruction:(double)distanceToNextInstruction distanceToNextSection:(double)distanceToNextSection distanceToNextItinerary:(double)distanceToNextItinerary isLastItineraryInstruction:(BOOL)isLastItineraryInstruction isLastSectionInstruction:(BOOL)isLastSectionInstruction distanceToArrival:(double)distanceToArrival timeToArrival:(int64_t)timeToArrival snappedLocation:(GNKGeoPoint *)snappedLocation realLocation:(GNKGeoPoint *)realLocation estimatedDateOfArrival:(GNKKotlinx_datetimeInstant *)estimatedDateOfArrival speed:(double)speed nextSection:(GNKItinerarySection * _Nullable)nextSection nextItinerary:(GNKItinerary * _Nullable)nextItinerary currentSection:(GNKItinerarySection *)currentSection __attribute__((swift_name("doCopy(created:currentInstruction:nextInstruction:previousInstruction:currentSegment:currentItinerary:distanceToNextInstruction:distanceToNextSection:distanceToNextItinerary:isLastItineraryInstruction:isLastSectionInstruction:distanceToArrival:timeToArrival:snappedLocation:realLocation:estimatedDateOfArrival:speed:nextSection:nextItinerary:currentSection:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property GNKKotlinx_datetimeInstant *created __attribute__((swift_name("created")));
@property GNKItineraryInstruction *currentInstruction __attribute__((swift_name("currentInstruction")));
@property GNKItinerary *currentItinerary __attribute__((swift_name("currentItinerary")));
@property GNKItinerarySection *currentSection __attribute__((swift_name("currentSection")));
@property GNKItinerarySegment *currentSegment __attribute__((swift_name("currentSegment")));

/**
 * Total distance (until arrival point) in meters
 */
@property double distanceToArrival __attribute__((swift_name("distanceToArrival")));

/**
 * Total distance (until next instruction) in meters
 */
@property double distanceToNextInstruction __attribute__((swift_name("distanceToNextInstruction")));

/**
 * Total distance (until next itinerary) in meters
 */
@property double distanceToNextItinerary __attribute__((swift_name("distanceToNextItinerary")));

/**
 * Total distance (until next section) in meters
 */
@property double distanceToNextSection __attribute__((swift_name("distanceToNextSection")));
@property GNKKotlinx_datetimeInstant *estimatedDateOfArrival __attribute__((swift_name("estimatedDateOfArrival")));
@property BOOL isLastItineraryInstruction __attribute__((swift_name("isLastItineraryInstruction")));
@property BOOL isLastSectionInstruction __attribute__((swift_name("isLastSectionInstruction")));
@property GNKItineraryInstruction * _Nullable nextInstruction __attribute__((swift_name("nextInstruction")));
@property GNKItinerary * _Nullable nextItinerary __attribute__((swift_name("nextItinerary")));
@property GNKItinerarySection * _Nullable nextSection __attribute__((swift_name("nextSection")));
@property GNKItineraryInstruction * _Nullable previousInstruction __attribute__((swift_name("previousInstruction")));
@property GNKGeoPoint *realLocation __attribute__((swift_name("realLocation")));
@property GNKGeoPoint *snappedLocation __attribute__((swift_name("snappedLocation")));
@property double speed __attribute__((swift_name("speed")));

/**
 * Total time (until arrival point) in seconds
 */
@property int64_t timeToArrival __attribute__((swift_name("timeToArrival")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationProgress.Companion")))
@interface GNKNavigationProgressCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKNavigationProgressCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("NavigationProgressListener")))
@protocol GNKNavigationProgressListener
@required
- (void)onNavigationOffTrack __attribute__((swift_name("onNavigationOffTrack()")));
- (void)onNavigationProgressChangedNavigationProgress:(GNKNavigationProgress *)navigationProgress __attribute__((swift_name("onNavigationProgressChanged(navigationProgress:)")));
@end

__attribute__((swift_name("NavigationRecalculateListener")))
@protocol GNKNavigationRecalculateListener
@required
- (void)onNavigationRecalculationFail __attribute__((swift_name("onNavigationRecalculationFail()")));
- (void)onNavigationRecalculationSuccessItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("onNavigationRecalculationSuccess(itinerary:)")));
- (void)onNavigationStartRecalculating __attribute__((swift_name("onNavigationStartRecalculating()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationRecalculateListenerWrapper")))
@interface GNKNavigationRecalculateListenerWrapper : GNKBase <GNKNavigationRecalculateListener>
- (instancetype)initWithListener:(id<GNKNavigationRecalculateListener>)listener __attribute__((swift_name("init(listener:)"))) __attribute__((objc_designated_initializer));
- (void)onNavigationRecalculationFail __attribute__((swift_name("onNavigationRecalculationFail()")));
- (void)onNavigationRecalculationSuccessItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("onNavigationRecalculationSuccess(itinerary:)")));
- (void)onNavigationStartRecalculating __attribute__((swift_name("onNavigationStartRecalculating()")));
@end

__attribute__((swift_name("KotlinComparable")))
@protocol GNKKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end

__attribute__((swift_name("KotlinEnum")))
@interface GNKKotlinEnum<E> : GNKBase <GNKKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecalculationBehavior")))
@interface GNKRecalculationBehavior : GNKKotlinEnum<GNKRecalculationBehavior *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKRecalculationBehaviorCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKRecalculationBehavior *insertbeforecurrentitinerary __attribute__((swift_name("insertbeforecurrentitinerary")));
@property (class, readonly) GNKRecalculationBehavior *replacecurrentitinerary __attribute__((swift_name("replacecurrentitinerary")));
@property (class, readonly) GNKRecalculationBehavior *none __attribute__((swift_name("none")));
+ (GNKKotlinArray<GNKRecalculationBehavior *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKRecalculationBehavior *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RecalculationBehavior.Companion")))
@interface GNKRecalculationBehaviorCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKRecalculationBehaviorCompanion *shared __attribute__((swift_name("shared")));
- (GNKRecalculationBehavior *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BearingUtils")))
@interface GNKBearingUtils : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (float)sanitizeBearingBearing:(float)bearing __attribute__((swift_name("sanitizeBearing(bearing:)")));
@end

__attribute__((swift_name("KotlinThrowable")))
@interface GNKKotlinThrowable : GNKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));

/**
 * @note annotations
 *   kotlin.experimental.ExperimentalNativeApi
*/
- (GNKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end

__attribute__((swift_name("KotlinException")))
@interface GNKKotlinException : GNKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationNotReadyException")))
@interface GNKNavigationNotReadyException : GNKKotlinException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationOffTrackException")))
@interface GNKNavigationOffTrackException : GNKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Itinerary")))
@interface GNKItinerary : GNKBase <GNKCommonParcelable>
- (instancetype)initWithId:(NSString *)id estimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture duration:(int32_t)duration type:(GNKItineraryType *)type distances:(GNKRoadTypeDistances *)distances waypoints:(NSMutableArray<GNKWaypoint *> *)waypoints sections:(NSMutableArray<GNKItinerarySection *> *)sections nextItineraryId:(NSString * _Nullable)nextItineraryId __attribute__((swift_name("init(id:estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:duration:type:distances:waypoints:sections:nextItineraryId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerary *)doCopyId:(NSString *)id estimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture duration:(int32_t)duration type:(GNKItineraryType *)type distances:(GNKRoadTypeDistances *)distances waypoints:(NSMutableArray<GNKWaypoint *> *)waypoints sections:(NSMutableArray<GNKItinerarySection *> *)sections nextItineraryId:(NSString * _Nullable)nextItineraryId __attribute__((swift_name("doCopy(id:estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:duration:type:distances:waypoints:sections:nextItineraryId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKWaypoint *arrival __attribute__((swift_name("arrival")));
@property (readonly) int32_t bikeAverageSpeed __attribute__((swift_name("bikeAverageSpeed")));
@property (readonly) GNKItineraryBikeProfile *bikeProfile __attribute__((swift_name("bikeProfile")));
@property (readonly) GNKItineraryBikeType *bikeType __attribute__((swift_name("bikeType")));

/**
 * max north / min south / max east / min west
 */
@property (readonly) GNKBounds *bounds __attribute__((swift_name("bounds")));

/**
 * in KCal
 */
@property (readonly) int32_t calories __attribute__((swift_name("calories")));
@property (readonly) GNKWaypoint *departure __attribute__((swift_name("departure")));

/**
 * Distances by kind (recommended, discouraged, normal, total)
 */
@property GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * Duration time (in seconds)
 */
@property int32_t duration __attribute__((swift_name("duration")));
@property (readonly) NSMutableArray<GNKItineraryElevation *> *elevations __attribute__((swift_name("elevations")));

/**
 * Estimated date of arrival
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfArrival __attribute__((swift_name("estimatedDatetimeOfArrival")));

/**
 * Estimated date of departure
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfDeparture __attribute__((swift_name("estimatedDatetimeOfDeparture")));
@property (readonly) GNKItinerarySection *firstSection __attribute__((swift_name("firstSection")));
@property (readonly) NSMutableArray<GNKGeoPoint *> *geometry __attribute__((swift_name("geometry")));

/**
 * ID of the calculated itinerary (can be used to retrieve more details)
 */
@property NSString *id __attribute__((swift_name("id")));
@property (readonly) NSMutableArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));
@property (readonly) BOOL isElectricAdapted __attribute__((swift_name("isElectricAdapted")));
@property (readonly) BOOL isTouristic __attribute__((swift_name("isTouristic")));
@property (readonly) int32_t kiloCalories __attribute__((swift_name("kiloCalories")));
@property (readonly) GNKItinerarySection *lastSection __attribute__((swift_name("lastSection")));
@property (readonly) NSString *mainDirections __attribute__((swift_name("mainDirections")));

/**
 * id of the next itinerary (in navigation)
 */
@property NSString * _Nullable nextItineraryId __attribute__((swift_name("nextItineraryId")));
@property GNKRecalculationBehavior *recalculationBehavior __attribute__((swift_name("recalculationBehavior")));
@property (readonly) NSMutableArray<GNKItineraryRoadCyclingQuality *> *roadCyclingQuality __attribute__((swift_name("roadCyclingQuality")));

/**
 * Parts of the itinerary, each part is based on TransportMode
 */
@property NSMutableArray<GNKItinerarySection *> *sections __attribute__((swift_name("sections")));
@property (readonly) NSArray<GNKWaypoint *> *steps __attribute__((swift_name("steps")));
@property (readonly) NSMutableArray<GNKTransportMode *> *transportModes __attribute__((swift_name("transportModes")));

/**
 * Title (Recommended, Faster, Safer, etc)
 */
@property GNKItineraryType *type __attribute__((swift_name("type")));
@property (readonly) int32_t verticalGain __attribute__((swift_name("verticalGain")));
@property (readonly) int32_t verticalLoss __attribute__((swift_name("verticalLoss")));

/**
 * Start, steps and end points
 */
@property NSMutableArray<GNKWaypoint *> *waypoints __attribute__((swift_name("waypoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Itinerary.Companion")))
@interface GNKItineraryCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryCompanion *shared __attribute__((swift_name("shared")));
- (GNKItinerary *)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (NSString *)serializeItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("serialize(itinerary:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeMotorType")))
@interface GNKItineraryBikeMotorType : GNKKotlinEnum<GNKItineraryBikeMotorType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryBikeMotorTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryBikeMotorType *beltDrive __attribute__((swift_name("beltDrive")));
@property (class, readonly) GNKItineraryBikeMotorType *midDrive __attribute__((swift_name("midDrive")));
+ (GNKKotlinArray<GNKItineraryBikeMotorType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryBikeMotorType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeMotorType.Companion")))
@interface GNKItineraryBikeMotorTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryBikeMotorTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryBikeMotorType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeProfile")))
@interface GNKItineraryBikeProfile : GNKKotlinEnum<GNKItineraryBikeProfile *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryBikeProfileCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryBikeProfile *beginner __attribute__((swift_name("beginner")));
@property (class, readonly) GNKItineraryBikeProfile *median __attribute__((swift_name("median")));
@property (class, readonly) GNKItineraryBikeProfile *expert __attribute__((swift_name("expert")));
@property (class, readonly) GNKItineraryBikeProfile *ride __attribute__((swift_name("ride")));
@property (class, readonly) GNKItineraryBikeProfile *vtc __attribute__((swift_name("vtc")));
@property (class, readonly) GNKItineraryBikeProfile *walking __attribute__((swift_name("walking")));
@property (class, readonly) GNKItineraryBikeProfile *cargo __attribute__((swift_name("cargo")));
+ (GNKKotlinArray<GNKItineraryBikeProfile *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryBikeProfile *> *entries __attribute__((swift_name("entries")));
@property (readonly) int32_t averageSpeed __attribute__((swift_name("averageSpeed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeProfile.Companion")))
@interface GNKItineraryBikeProfileCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryBikeProfileCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryBikeProfile *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeType")))
@interface GNKItineraryBikeType : GNKKotlinEnum<GNKItineraryBikeType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryBikeTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryBikeType *shared __attribute__((swift_name("shared")));
@property (class, readonly) GNKItineraryBikeType *regular __attribute__((swift_name("regular")));
+ (GNKKotlinArray<GNKItineraryBikeType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryBikeType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeType.Companion")))
@interface GNKItineraryBikeTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryBikeTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryBikeType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryEBikeEnergies")))
@interface GNKItineraryEBikeEnergies : GNKBase <GNKCommonParcelable>
- (instancetype)initWithUsingMinimumAssistance:(GNKItinerarySectionEnergy * _Nullable)usingMinimumAssistance usingMaximumAssistance:(GNKItinerarySectionEnergy * _Nullable)usingMaximumAssistance __attribute__((swift_name("init(usingMinimumAssistance:usingMaximumAssistance:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryEBikeEnergiesCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryEBikeEnergies *)doCopyUsingMinimumAssistance:(GNKItinerarySectionEnergy * _Nullable)usingMinimumAssistance usingMaximumAssistance:(GNKItinerarySectionEnergy * _Nullable)usingMaximumAssistance __attribute__((swift_name("doCopy(usingMinimumAssistance:usingMaximumAssistance:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Energies remaining at the end of the itinerary using maximum assistance level
 */
@property GNKItinerarySectionEnergy * _Nullable usingMaximumAssistance __attribute__((swift_name("usingMaximumAssistance")));

/**
 * Energies remaining at the end of the itinerary using minimum assistance level
 */
@property GNKItinerarySectionEnergy * _Nullable usingMinimumAssistance __attribute__((swift_name("usingMinimumAssistance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryEBikeEnergies.Companion")))
@interface GNKItineraryEBikeEnergiesCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryEBikeEnergiesCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryElevation")))
@interface GNKItineraryElevation : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDistanceFromSectionStart:(int32_t)distanceFromSectionStart elevation:(double)elevation indexInGeometry:(int32_t)indexInGeometry __attribute__((swift_name("init(distanceFromSectionStart:elevation:indexInGeometry:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryElevationCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryElevation *)doCopyDistanceFromSectionStart:(int32_t)distanceFromSectionStart elevation:(double)elevation indexInGeometry:(int32_t)indexInGeometry __attribute__((swift_name("doCopy(distanceFromSectionStart:elevation:indexInGeometry:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Total distance from itinnerary start
 */
@property int32_t distanceFromItineraryStart __attribute__((swift_name("distanceFromItineraryStart")));

/**
 * Total distance from section start
 */
@property int32_t distanceFromSectionStart __attribute__((swift_name("distanceFromSectionStart")));

/**
 * Altitude on earth
 */
@property double elevation __attribute__((swift_name("elevation")));

/**
 * Index of the elevation in the section geometry
 */
@property int32_t indexInGeometry __attribute__((swift_name("indexInGeometry")));

/**
 * Index of section in itinerary
 */
@property GNKItinerarySection *section __attribute__((swift_name("section")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryElevation.Companion")))
@interface GNKItineraryElevationCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryElevationCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryFacility")))
@interface GNKItineraryFacility : GNKBase <GNKCommonParcelable>
- (instancetype)initWithIndexInGeometry:(int32_t)indexInGeometry roadType:(GNKItineraryInstructionRoadType *)roadType __attribute__((swift_name("init(indexInGeometry:roadType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryFacilityCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryFacility *)doCopyIndexInGeometry:(int32_t)indexInGeometry roadType:(GNKItineraryInstructionRoadType *)roadType __attribute__((swift_name("doCopy(indexInGeometry:roadType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Index of the facility in the section geometry
 */
@property int32_t indexInGeometry __attribute__((swift_name("indexInGeometry")));

/**
 * Altitude on earth
 */
@property GNKItineraryInstructionRoadType *roadType __attribute__((swift_name("roadType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryFacility.Companion")))
@interface GNKItineraryFacilityCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryFacilityCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstruction")))
@interface GNKItineraryInstruction : GNKBase <GNKCommonParcelable>
- (instancetype)initWithInstruction:(GNKItineraryInstruction *)instruction __attribute__((swift_name("init(instruction:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithIndex:(int32_t)index type:(GNKItineraryInstructionType *)type distanceFromPreviousInstruction:(int32_t)distanceFromPreviousInstruction distanceToNextInstruction:(int32_t)distanceToNextInstruction roadName:(NSString * _Nullable)roadName roadType:(GNKItineraryInstructionRoadType *)roadType cityNames:(NSMutableArray<NSString *> *)cityNames cardinalDirection:(GNKItineraryInstructionCardinalDirection *)cardinalDirection indexInGeometry:(int32_t)indexInGeometry durationFromPreviousInstruction:(int32_t)durationFromPreviousInstruction durationToNextInstruction:(int32_t)durationToNextInstruction __attribute__((swift_name("init(index:type:distanceFromPreviousInstruction:distanceToNextInstruction:roadName:roadType:cityNames:cardinalDirection:indexInGeometry:durationFromPreviousInstruction:durationToNextInstruction:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryInstructionCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryInstruction *)doCopyIndex:(int32_t)index type:(GNKItineraryInstructionType *)type distanceFromPreviousInstruction:(int32_t)distanceFromPreviousInstruction distanceToNextInstruction:(int32_t)distanceToNextInstruction roadName:(NSString * _Nullable)roadName roadType:(GNKItineraryInstructionRoadType *)roadType cityNames:(NSMutableArray<NSString *> *)cityNames cardinalDirection:(GNKItineraryInstructionCardinalDirection *)cardinalDirection indexInGeometry:(int32_t)indexInGeometry durationFromPreviousInstruction:(int32_t)durationFromPreviousInstruction durationToNextInstruction:(int32_t)durationToNextInstruction __attribute__((swift_name("doCopy(index:type:distanceFromPreviousInstruction:distanceToNextInstruction:roadName:roadType:cityNames:cardinalDirection:indexInGeometry:durationFromPreviousInstruction:durationToNextInstruction:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (GNKItineraryInstruction * _Nullable)next __attribute__((swift_name("next()")));
- (GNKItineraryInstruction * _Nullable)previous __attribute__((swift_name("previous()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * North, West, etc.
 */
@property GNKItineraryInstructionCardinalDirection *cardinalDirection __attribute__((swift_name("cardinalDirection")));

/**
 * Name of the road to which the instruction leads
 */
@property NSMutableArray<NSString *> *cityNames __attribute__((swift_name("cityNames")));

/**
 * Distance in meters
 */
@property int32_t distanceFromPreviousInstruction __attribute__((swift_name("distanceFromPreviousInstruction")));

/**
 * Distance in meters
 */
@property int32_t distanceToNextInstruction __attribute__((swift_name("distanceToNextInstruction")));

/**
 * duration of the instruction from previous instruction
 */
@property int32_t durationFromPreviousInstruction __attribute__((swift_name("durationFromPreviousInstruction")));

/**
 * duration of the instruction from previous instruction
 */
@property int32_t durationToNextInstruction __attribute__((swift_name("durationToNextInstruction")));
@property (readonly) GNKGeoPoint *geoPoint __attribute__((swift_name("geoPoint")));

/**
 * index of the instruction
 */
@property int32_t index __attribute__((swift_name("index")));

/**
 * Index of the related point in the geometry field
 */
@property int32_t indexInGeometry __attribute__((swift_name("indexInGeometry")));

/**
 * Name of the road to which the instruction leads
 */
@property NSString * _Nullable roadName __attribute__((swift_name("roadName")));

/**
 * Facility kind
 */
@property GNKItineraryInstructionRoadType *roadType __attribute__((swift_name("roadType")));

/**
 * Section of the instruction
 */
@property GNKItinerarySection *section __attribute__((swift_name("section")));

/**
 * instruction to follow (turn, continue, etc.)
 */
@property GNKItineraryInstructionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstruction.Companion")))
@interface GNKItineraryInstructionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryInstructionCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryInstruction *)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (NSString *)serializeInstruction:(GNKItineraryInstruction *)instruction __attribute__((swift_name("serialize(instruction:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionCardinalDirection")))
@interface GNKItineraryInstructionCardinalDirection : GNKKotlinEnum<GNKItineraryInstructionCardinalDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryInstructionCardinalDirectionCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *east __attribute__((swift_name("east")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *north __attribute__((swift_name("north")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *northeast __attribute__((swift_name("northeast")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *northwest __attribute__((swift_name("northwest")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *south __attribute__((swift_name("south")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *southeast __attribute__((swift_name("southeast")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *southwest __attribute__((swift_name("southwest")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *west __attribute__((swift_name("west")));
@property (class, readonly) GNKItineraryInstructionCardinalDirection *unkonwn __attribute__((swift_name("unkonwn")));
+ (GNKKotlinArray<GNKItineraryInstructionCardinalDirection *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryInstructionCardinalDirection *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionCardinalDirection.Companion")))
@interface GNKItineraryInstructionCardinalDirectionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryInstructionCardinalDirectionCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryInstructionCardinalDirection *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionRoadType")))
@interface GNKItineraryInstructionRoadType : GNKKotlinEnum<GNKItineraryInstructionRoadType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryInstructionRoadTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryInstructionRoadType *cycleway __attribute__((swift_name("cycleway")));
@property (class, readonly) GNKItineraryInstructionRoadType *lane __attribute__((swift_name("lane")));
@property (class, readonly) GNKItineraryInstructionRoadType *greenway __attribute__((swift_name("greenway")));
@property (class, readonly) GNKItineraryInstructionRoadType *opposite __attribute__((swift_name("opposite")));
@property (class, readonly) GNKItineraryInstructionRoadType *sharebusway __attribute__((swift_name("sharebusway")));
@property (class, readonly) GNKItineraryInstructionRoadType *pedestrian __attribute__((swift_name("pedestrian")));
@property (class, readonly) GNKItineraryInstructionRoadType *footway __attribute__((swift_name("footway")));
@property (class, readonly) GNKItineraryInstructionRoadType *livingstreet __attribute__((swift_name("livingstreet")));
@property (class, readonly) GNKItineraryInstructionRoadType *zone30 __attribute__((swift_name("zone30")));
@property (class, readonly) GNKItineraryInstructionRoadType *steps __attribute__((swift_name("steps")));
@property (class, readonly) GNKItineraryInstructionRoadType *ferry __attribute__((swift_name("ferry")));
@property (class, readonly) GNKItineraryInstructionRoadType *service __attribute__((swift_name("service")));
@property (class, readonly) GNKItineraryInstructionRoadType *primary __attribute__((swift_name("primary")));
@property (class, readonly) GNKItineraryInstructionRoadType *secondary __attribute__((swift_name("secondary")));
@property (class, readonly) GNKItineraryInstructionRoadType *tertiary __attribute__((swift_name("tertiary")));
@property (class, readonly) GNKItineraryInstructionRoadType *residential __attribute__((swift_name("residential")));
@property (class, readonly) GNKItineraryInstructionRoadType *none __attribute__((swift_name("none")));
@property (class, readonly) GNKItineraryInstructionRoadType *unknown __attribute__((swift_name("unknown")));
+ (GNKKotlinArray<GNKItineraryInstructionRoadType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryInstructionRoadType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionRoadType.Companion")))
@interface GNKItineraryInstructionRoadTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryInstructionRoadTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryInstructionRoadType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionType")))
@interface GNKItineraryInstructionType : GNKKotlinEnum<GNKItineraryInstructionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryInstructionTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryInstructionType *crossing __attribute__((swift_name("crossing")));
@property (class, readonly) GNKItineraryInstructionType *elevator __attribute__((swift_name("elevator")));
@property (class, readonly) GNKItineraryInstructionType *enterAgainstAllowedDirection __attribute__((swift_name("enterAgainstAllowedDirection")));
@property (class, readonly) GNKItineraryInstructionType *leaveAgainstAllowedDirection __attribute__((swift_name("leaveAgainstAllowedDirection")));
@property (class, readonly) GNKItineraryInstructionType *goStraight __attribute__((swift_name("goStraight")));
@property (class, readonly) GNKItineraryInstructionType *getOffTheBike __attribute__((swift_name("getOffTheBike")));
@property (class, readonly) GNKItineraryInstructionType *getOnTheBike __attribute__((swift_name("getOnTheBike")));
@property (class, readonly) GNKItineraryInstructionType *headOn __attribute__((swift_name("headOn")));
@property (class, readonly) GNKItineraryInstructionType *enterRoundAbout __attribute__((swift_name("enterRoundAbout")));
@property (class, readonly) GNKItineraryInstructionType *leaveRoundAbout __attribute__((swift_name("leaveRoundAbout")));
@property (class, readonly) GNKItineraryInstructionType *stayOnRoundAbout __attribute__((swift_name("stayOnRoundAbout")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit1 __attribute__((swift_name("roundAboutExit1")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit2 __attribute__((swift_name("roundAboutExit2")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit3 __attribute__((swift_name("roundAboutExit3")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit4 __attribute__((swift_name("roundAboutExit4")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit5 __attribute__((swift_name("roundAboutExit5")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit6 __attribute__((swift_name("roundAboutExit6")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit7 __attribute__((swift_name("roundAboutExit7")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit8 __attribute__((swift_name("roundAboutExit8")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExit9 __attribute__((swift_name("roundAboutExit9")));
@property (class, readonly) GNKItineraryInstructionType *roundAboutExitX __attribute__((swift_name("roundAboutExitX")));
@property (class, readonly) GNKItineraryInstructionType *startAtEndOfStreet __attribute__((swift_name("startAtEndOfStreet")));
@property (class, readonly) GNKItineraryInstructionType *takeSharedBike __attribute__((swift_name("takeSharedBike")));
@property (class, readonly) GNKItineraryInstructionType *dropSharedBike __attribute__((swift_name("dropSharedBike")));
@property (class, readonly) GNKItineraryInstructionType *takePublicTransport __attribute__((swift_name("takePublicTransport")));
@property (class, readonly) GNKItineraryInstructionType *leavePublicTransport __attribute__((swift_name("leavePublicTransport")));
@property (class, readonly) GNKItineraryInstructionType *turnSharpLeft __attribute__((swift_name("turnSharpLeft")));
@property (class, readonly) GNKItineraryInstructionType *turnLeft __attribute__((swift_name("turnLeft")));
@property (class, readonly) GNKItineraryInstructionType *turnSlightLeft __attribute__((swift_name("turnSlightLeft")));
@property (class, readonly) GNKItineraryInstructionType *turnSlightRight __attribute__((swift_name("turnSlightRight")));
@property (class, readonly) GNKItineraryInstructionType *turnRight __attribute__((swift_name("turnRight")));
@property (class, readonly) GNKItineraryInstructionType *turnSharpRight __attribute__((swift_name("turnSharpRight")));
@property (class, readonly) GNKItineraryInstructionType *reachedTheStation __attribute__((swift_name("reachedTheStation")));
@property (class, readonly) GNKItineraryInstructionType *reachedYourDestination __attribute__((swift_name("reachedYourDestination")));
@property (class, readonly) GNKItineraryInstructionType *reachViaLocation __attribute__((swift_name("reachViaLocation")));
@property (class, readonly) GNKItineraryInstructionType *uTurn __attribute__((swift_name("uTurn")));
@property (class, readonly) GNKItineraryInstructionType *unknown __attribute__((swift_name("unknown")));
+ (GNKKotlinArray<GNKItineraryInstructionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryInstructionType *> *entries __attribute__((swift_name("entries")));
@property (readonly) BOOL isRoundAbout __attribute__((swift_name("isRoundAbout")));
@property (readonly) int32_t roundAboutExitNumber __attribute__((swift_name("roundAboutExitNumber")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryInstructionType.Companion")))
@interface GNKItineraryInstructionTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryInstructionTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryInstructionType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryLoopType")))
@interface GNKItineraryLoopType : GNKKotlinEnum<GNKItineraryLoopType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryLoopTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryLoopType *maxRadius __attribute__((swift_name("maxRadius")));
@property (class, readonly) GNKItineraryLoopType *poiTotalDistance __attribute__((swift_name("poiTotalDistance")));
@property (class, readonly) GNKItineraryLoopType *totalDistance __attribute__((swift_name("totalDistance")));
+ (GNKKotlinArray<GNKItineraryLoopType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryLoopType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryLoopType.Companion")))
@interface GNKItineraryLoopTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryLoopTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryLoopType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryPublicTransportStopPoint")))
@interface GNKItineraryPublicTransportStopPoint : GNKBase <GNKCommonParcelable>
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude title:(NSString * _Nullable)title estimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture __attribute__((swift_name("init(latitude:longitude:title:estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryPublicTransportStopPointCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryPublicTransportStopPoint *)doCopyLatitude:(double)latitude longitude:(double)longitude title:(NSString * _Nullable)title estimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture __attribute__((swift_name("doCopy(latitude:longitude:title:estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfArrival __attribute__((swift_name("estimatedDatetimeOfArrival")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfDeparture __attribute__((swift_name("estimatedDatetimeOfDeparture")));
@property double latitude __attribute__((swift_name("latitude")));
@property double longitude __attribute__((swift_name("longitude")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryPublicTransportStopPoint.Companion")))
@interface GNKItineraryPublicTransportStopPointCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryPublicTransportStopPointCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequest")))
@interface GNKItineraryRequest : GNKBase <GNKCommonParcelable>
@property (class, readonly, getter=companion) GNKItineraryRequestCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryRequest *)doCopyInstructions:(BOOL)instructions elevations:(BOOL)elevations geometry:(BOOL)geometry alternatives:(BOOL)alternatives energy:(BOOL)energy facilities:(BOOL)facilities datetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)datetimeOfArrival datetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)datetimeOfDeparture waypoints:(NSArray<GNKWaypoint *> *)waypoints arrivalGeometry:(NSArray<GNKGeoPoint *> * _Nullable)arrivalGeometry transportModes:(NSArray<GNKTransportMode *> *)transportModes bikeDetails:(GNKItineraryRequestBikeDetails * _Nullable)bikeDetails navigationDetails:(GNKItineraryRequestNavigationDetails * _Nullable)navigationDetails loopDetails:(GNKItineraryRequestLoopDetails * _Nullable)loopDetails __attribute__((swift_name("doCopy(instructions:elevations:geometry:alternatives:energy:facilities:datetimeOfArrival:datetimeOfDeparture:waypoints:arrivalGeometry:transportModes:bikeDetails:navigationDetails:loopDetails:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL alternatives __attribute__((swift_name("alternatives")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedLineStringSerializer))
*/
@property (readonly) NSArray<GNKGeoPoint *> * _Nullable arrivalGeometry __attribute__((swift_name("arrivalGeometry")));
@property (readonly) GNKItineraryRequestBikeDetails * _Nullable bikeDetails __attribute__((swift_name("bikeDetails")));
@property (readonly) GNKKotlinx_datetimeInstant * _Nullable datetimeOfArrival __attribute__((swift_name("datetimeOfArrival")));
@property (readonly) GNKKotlinx_datetimeInstant * _Nullable datetimeOfDeparture __attribute__((swift_name("datetimeOfDeparture")));
@property (readonly) BOOL elevations __attribute__((swift_name("elevations")));
@property (readonly) BOOL energy __attribute__((swift_name("energy")));
@property (readonly) BOOL facilities __attribute__((swift_name("facilities")));
@property (readonly) BOOL geometry __attribute__((swift_name("geometry")));
@property (readonly) BOOL instructions __attribute__((swift_name("instructions")));
@property (readonly) GNKItineraryRequestLoopDetails * _Nullable loopDetails __attribute__((swift_name("loopDetails")));
@property (readonly) GNKItineraryRequestNavigationDetails * _Nullable navigationDetails __attribute__((swift_name("navigationDetails")));
@property (readonly) NSArray<GNKTransportMode *> *transportModes __attribute__((swift_name("transportModes")));
@property (readonly) NSArray<GNKWaypoint *> *waypoints __attribute__((swift_name("waypoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequest.Builder")))
@interface GNKItineraryRequestBuilder : GNKBase
- (instancetype)initWithInstructions:(BOOL)instructions elevations:(BOOL)elevations geometry:(BOOL)geometry alternatives:(BOOL)alternatives energy:(BOOL)energy facilities:(BOOL)facilities dateOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)dateOfArrival dateOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)dateOfDeparture waypoints:(NSArray<GNKWaypoint *> *)waypoints arrivalGeometry:(NSArray<GNKGeoPoint *> * _Nullable)arrivalGeometry transportModes:(NSArray<GNKTransportMode *> *)transportModes bikeDetails:(GNKItineraryRequestBikeDetails * _Nullable)bikeDetails navigationDetails:(GNKItineraryRequestNavigationDetails * _Nullable)navigationDetails loopDetails:(GNKItineraryRequestLoopDetails * _Nullable)loopDetails __attribute__((swift_name("init(instructions:elevations:geometry:alternatives:energy:facilities:dateOfArrival:dateOfDeparture:waypoints:arrivalGeometry:transportModes:bikeDetails:navigationDetails:loopDetails:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryRequestBuilderCompanion *companion __attribute__((swift_name("companion")));

/**
 * Include alternative routes in the response
 *
 * @param alternatives
 * @return
 */
- (GNKItineraryRequestBuilder *)alternativesAlternatives:(BOOL)alternatives __attribute__((swift_name("alternatives(alternatives:)")));

/**
 * Average speed of the cyclist
 * (will be used to calculate durations).
 * The average speed value must be between 5 and 45 km/h.
 *
 *
 * Default values are :
 * 13 km/h for BEGINNER Default,
 * 16 km/h for MEDIAN,
 * 20 km/h for EXPERT
 *
 * @param averageSpeed
 * @return
 */
- (GNKItineraryRequestBuilder *)bikeAverageSpeedAverageSpeed:(int32_t)averageSpeed __attribute__((swift_name("bikeAverageSpeed(averageSpeed:)")));

/**
 * The cyclist profile to use to compute the itinerary. It sets default average speed accordingly.
 *
 * @param profile
 * @return
 */
- (GNKItineraryRequestBuilder *)bikeProfileProfile:(GNKItineraryBikeProfile *)profile __attribute__((swift_name("bikeProfile(profile:)")));

/**
 * Bike type of the cyclist
 *
 * @param bikeType
 * @return
 */
- (GNKItineraryRequestBuilder *)bikeTypeBikeType:(GNKItineraryBikeType *)bikeType __attribute__((swift_name("bikeType(bikeType:)")));

/**
 * @note This method converts instances of RequestBuilderException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (GNKItineraryRequest * _Nullable)buildAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("build()")));
- (GNKItineraryRequestBuilder *)doCopyInstructions:(BOOL)instructions elevations:(BOOL)elevations geometry:(BOOL)geometry alternatives:(BOOL)alternatives energy:(BOOL)energy facilities:(BOOL)facilities dateOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)dateOfArrival dateOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)dateOfDeparture waypoints:(NSArray<GNKWaypoint *> *)waypoints arrivalGeometry:(NSArray<GNKGeoPoint *> * _Nullable)arrivalGeometry transportModes:(NSArray<GNKTransportMode *> *)transportModes bikeDetails:(GNKItineraryRequestBikeDetails * _Nullable)bikeDetails navigationDetails:(GNKItineraryRequestNavigationDetails * _Nullable)navigationDetails loopDetails:(GNKItineraryRequestLoopDetails * _Nullable)loopDetails __attribute__((swift_name("doCopy(instructions:elevations:geometry:alternatives:energy:facilities:dateOfArrival:dateOfDeparture:waypoints:arrivalGeometry:transportModes:bikeDetails:navigationDetails:loopDetails:)")));
- (GNKItineraryRequestBuilder *)currentOrientationDuringNavigationOrientation:(float)orientation __attribute__((swift_name("currentOrientationDuringNavigation(orientation:)")));
- (GNKItineraryRequestBuilder *)currentSpeedDuringNavigationSpeed:(float)speed __attribute__((swift_name("currentSpeedDuringNavigation(speed:)")));
- (GNKItineraryRequestBuilder *)currentTransportModeDuringNavigationTransportMode:(GNKTransportMode *)transportMode __attribute__((swift_name("currentTransportModeDuringNavigation(transportMode:)")));

/**
 * Preferred datetime of arrival (format:Y-M-DTHH:MM:SS.zzz)
 *
 * @param dateOfArrival
 * @return
 */
- (GNKItineraryRequestBuilder *)dateOfArrivalDateOfArrival:(GNKKotlinx_datetimeInstant *)dateOfArrival __attribute__((swift_name("dateOfArrival(dateOfArrival:)")));

/**
 * Prefered datetime of departure (format:Y-M-DTHH:MM:SS.zzz)
 *
 * @param dateOfDeparture
 * @return
 */
- (GNKItineraryRequestBuilder *)dateOfDepartureDateOfDeparture:(GNKKotlinx_datetimeInstant *)dateOfDeparture __attribute__((swift_name("dateOfDeparture(dateOfDeparture:)")));

/**
 * Battery capacity
 *
 * @param batteryCapacity
 * @return
 */
- (GNKItineraryRequestBuilder *)eBikeBatteryCapacityBatteryCapacity:(int32_t)batteryCapacity __attribute__((swift_name("eBikeBatteryCapacity(batteryCapacity:)")));

/**
 * Electric power
 *
 * @param electricPower
 * @return
 */
- (GNKItineraryRequestBuilder *)eBikeElectricPowerElectricPower:(int32_t)electricPower __attribute__((swift_name("eBikeElectricPower(electricPower:)")));

/**
 * Motor type
 *
 * @param motorType
 * @return
 */
- (GNKItineraryRequestBuilder *)eBikeMotorTypeMotorType:(GNKItineraryBikeMotorType *)motorType __attribute__((swift_name("eBikeMotorType(motorType:)")));

/**
 * Include the elevations in the response
 *
 * @param elevations
 * @return
 */
- (GNKItineraryRequestBuilder *)elevationsElevations:(BOOL)elevations __attribute__((swift_name("elevations(elevations:)")));

/**
 * Use energy
 *
 * @param energy
 * @return
 */
- (GNKItineraryRequestBuilder *)energyEnergy:(BOOL)energy __attribute__((swift_name("energy(energy:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));

/**
 * Use energy
 *
 * @param energy
 * @return
 */
- (GNKItineraryRequestBuilder *)facilitiesFacilities:(BOOL)facilities __attribute__((swift_name("facilities(facilities:)")));
- (GNKItineraryRequestBuilder *)generateItineraryToGeometryDeparture:(GNKWaypoint *)departure arrivalGeometry:(NSArray<GNKGeoPoint *> *)arrivalGeometry __attribute__((swift_name("generateItineraryToGeometry(departure:arrivalGeometry:)")));
- (GNKItineraryRequestBuilder *)generateLoopUsingDistanceWaypoint:(GNKWaypoint *)waypoint radius:(int32_t)radius __attribute__((swift_name("generateLoopUsingDistance(waypoint:radius:)")));
- (GNKItineraryRequestBuilder *)generateLoopUsingDurationWaypoint:(GNKWaypoint *)waypoint duration:(int32_t)duration __attribute__((swift_name("generateLoopUsingDuration(waypoint:duration:)")));
- (GNKItineraryRequestBuilder *)generateLoopUsingRadiusWaypoint:(GNKWaypoint *)waypoint radius:(int32_t)radius __attribute__((swift_name("generateLoopUsingRadius(waypoint:radius:)")));

/**
 * Include the geometry in the response
 *
 * @param geometry
 * @return
 */
- (GNKItineraryRequestBuilder *)geometryGeometry:(BOOL)geometry __attribute__((swift_name("geometry(geometry:)")));
- (BOOL)hasEnergy __attribute__((swift_name("hasEnergy()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));

/**
 * Include the itinerary.instructions in the response
 *
 * @param instructions
 * @return
 */
- (GNKItineraryRequestBuilder *)instructionsInstructions:(BOOL)instructions __attribute__((swift_name("instructions(instructions:)")));

/**
 * Check if transportMode has been set
 *
 * @return true if no transportMode has been set
 */
- (BOOL)needTransportModes __attribute__((swift_name("needTransportModes()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Allowed transport modes
 *
 * @param transportModes
 * @return
 */
- (GNKItineraryRequestBuilder *)transportModesTransportModes:(NSArray<GNKTransportMode *> *)transportModes __attribute__((swift_name("transportModes(transportModes:)")));

/**
 * Use electric bike
 *
 * @param eBike
 * @return
 */
- (GNKItineraryRequestBuilder *)useElectricBikeEBike:(BOOL)eBike __attribute__((swift_name("useElectricBike(eBike:)")));

/**
 * Departure and arrival
 *
 * @param departure
 * @param arrival
 * @return
 */
- (GNKItineraryRequestBuilder *)waypointsDeparture:(GNKWaypoint *)departure arrival:(GNKWaypoint *)arrival __attribute__((swift_name("waypoints(departure:arrival:)")));

/**
 * Ordered list of waypoints
 *
 * @param waypoints
 * @return
 */
- (GNKItineraryRequestBuilder *)waypointsWaypoints:(NSArray<GNKWaypoint *> *)waypoints __attribute__((swift_name("waypoints(waypoints:)")));
@property BOOL alternatives __attribute__((swift_name("alternatives")));
@property NSArray<GNKGeoPoint *> * _Nullable arrivalGeometry __attribute__((swift_name("arrivalGeometry")));
@property GNKItineraryRequestBikeDetails * _Nullable bikeDetails __attribute__((swift_name("bikeDetails")));
@property (readonly) GNKItineraryBikeProfile * _Nullable bikeProfile __attribute__((swift_name("bikeProfile")));
@property (readonly) GNKItineraryBikeType * _Nullable bikeType __attribute__((swift_name("bikeType")));
@property GNKKotlinx_datetimeInstant * _Nullable dateOfArrival __attribute__((swift_name("dateOfArrival")));
@property GNKKotlinx_datetimeInstant * _Nullable dateOfDeparture __attribute__((swift_name("dateOfDeparture")));
@property BOOL elevations __attribute__((swift_name("elevations")));
@property BOOL energy __attribute__((swift_name("energy")));
@property BOOL facilities __attribute__((swift_name("facilities")));
@property BOOL geometry __attribute__((swift_name("geometry")));
@property BOOL instructions __attribute__((swift_name("instructions")));
@property (readonly) BOOL isElectricBike __attribute__((swift_name("isElectricBike")));
@property GNKItineraryRequestLoopDetails * _Nullable loopDetails __attribute__((swift_name("loopDetails")));
@property GNKItineraryRequestNavigationDetails * _Nullable navigationDetails __attribute__((swift_name("navigationDetails")));
@property NSArray<GNKTransportMode *> *transportModes __attribute__((swift_name("transportModes")));
@property NSArray<GNKWaypoint *> *waypoints __attribute__((swift_name("waypoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequest.BuilderCompanion")))
@interface GNKItineraryRequestBuilderCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequest.Companion")))
@interface GNKItineraryRequestCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRequestCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryRequest *)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (NSString *)serializeItineraryRequest:(GNKItineraryRequest *)itineraryRequest __attribute__((swift_name("serialize(itineraryRequest:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestBikeDetails")))
@interface GNKItineraryRequestBikeDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithBikeType:(GNKItineraryBikeType *)bikeType bikeProfile:(GNKItineraryBikeProfile *)bikeProfile motorType:(GNKItineraryBikeMotorType *)motorType bikeAverageSpeed:(int32_t)bikeAverageSpeed batteryCapacity:(int32_t)batteryCapacity electricPower:(int32_t)electricPower eBike:(BOOL)eBike __attribute__((swift_name("init(bikeType:bikeProfile:motorType:bikeAverageSpeed:batteryCapacity:electricPower:eBike:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryRequestBikeDetailsCompanion *companion __attribute__((swift_name("companion")));
@property int32_t batteryCapacity __attribute__((swift_name("batteryCapacity")));
@property int32_t bikeAverageSpeed __attribute__((swift_name("bikeAverageSpeed")));
@property GNKItineraryBikeProfile *bikeProfile __attribute__((swift_name("bikeProfile")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/ItineraryBikeTypeSerializer))
*/
@property GNKItineraryBikeType *bikeType __attribute__((swift_name("bikeType")));
@property BOOL eBike __attribute__((swift_name("eBike")));
@property int32_t electricPower __attribute__((swift_name("electricPower")));
@property GNKItineraryBikeMotorType *motorType __attribute__((swift_name("motorType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestBikeDetails.Companion")))
@interface GNKItineraryRequestBikeDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRequestBikeDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestLoopDetails")))
@interface GNKItineraryRequestLoopDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithLoopType:(GNKItineraryLoopType *)loopType maxRadius:(GNKInt * _Nullable)maxRadius distance:(GNKInt * _Nullable)distance duration:(GNKInt * _Nullable)duration __attribute__((swift_name("init(loopType:maxRadius:distance:duration:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryRequestLoopDetailsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryRequestLoopDetails *)doCopyLoopType:(GNKItineraryLoopType *)loopType maxRadius:(GNKInt * _Nullable)maxRadius distance:(GNKInt * _Nullable)distance duration:(GNKInt * _Nullable)duration __attribute__((swift_name("doCopy(loopType:maxRadius:distance:duration:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property GNKInt * _Nullable distance __attribute__((swift_name("distance")));
@property GNKInt * _Nullable duration __attribute__((swift_name("duration")));
@property GNKItineraryLoopType *loopType __attribute__((swift_name("loopType")));
@property GNKInt * _Nullable maxRadius __attribute__((swift_name("maxRadius")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestLoopDetails.Companion")))
@interface GNKItineraryRequestLoopDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRequestLoopDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestNavigationDetails")))
@interface GNKItineraryRequestNavigationDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithTransportMode:(GNKTransportMode *)transportMode speed:(int32_t)speed orientation:(int32_t)orientation isRecalculating:(BOOL)isRecalculating __attribute__((swift_name("init(transportMode:speed:orientation:isRecalculating:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryRequestNavigationDetailsCompanion *companion __attribute__((swift_name("companion")));
@property BOOL isRecalculating __attribute__((swift_name("isRecalculating")));
@property int32_t orientation __attribute__((swift_name("orientation")));
@property int32_t speed __attribute__((swift_name("speed")));
@property GNKTransportMode *transportMode __attribute__((swift_name("transportMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRequestNavigationDetails.Companion")))
@interface GNKItineraryRequestNavigationDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRequestNavigationDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRoadCyclingQuality")))
@interface GNKItineraryRoadCyclingQuality : GNKBase <GNKCommonParcelable>
- (instancetype)initWithIndexInGeometry:(int32_t)indexInGeometry qualityType:(GNKItineraryRoadCyclingQualityType *)qualityType __attribute__((swift_name("init(indexInGeometry:qualityType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryRoadCyclingQualityCompanion *companion __attribute__((swift_name("companion")));
- (GNKItineraryRoadCyclingQuality *)doCopyIndexInGeometry:(int32_t)indexInGeometry qualityType:(GNKItineraryRoadCyclingQualityType *)qualityType __attribute__((swift_name("doCopy(indexInGeometry:qualityType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Index of the facility in the section geometry
 */
@property int32_t indexInGeometry __attribute__((swift_name("indexInGeometry")));

/**
 * Road Cycling Quality
 */
@property GNKItineraryRoadCyclingQualityType *qualityType __attribute__((swift_name("qualityType")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRoadCyclingQuality.Companion")))
@interface GNKItineraryRoadCyclingQualityCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRoadCyclingQualityCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRoadCyclingQualityType")))
@interface GNKItineraryRoadCyclingQualityType : GNKKotlinEnum<GNKItineraryRoadCyclingQualityType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryRoadCyclingQualityTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryRoadCyclingQualityType *asphalt __attribute__((swift_name("asphalt")));
@property (class, readonly) GNKItineraryRoadCyclingQualityType *path __attribute__((swift_name("path")));
@property (class, readonly) GNKItineraryRoadCyclingQualityType *damagedTracks __attribute__((swift_name("damagedTracks")));
@property (class, readonly) GNKItineraryRoadCyclingQualityType *unknown __attribute__((swift_name("unknown")));
+ (GNKKotlinArray<GNKItineraryRoadCyclingQualityType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryRoadCyclingQualityType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryRoadCyclingQualityType.Companion")))
@interface GNKItineraryRoadCyclingQualityTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryRoadCyclingQualityTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryRoadCyclingQualityType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySection")))
@interface GNKItinerarySection : GNKBase <GNKCommonParcelable>
- (instancetype)initWithEstimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture duration:(int32_t)duration geometry:(NSArray<GNKGeoPoint *> *)geometry transportMode:(GNKTransportMode *)transportMode waypoints:(NSMutableArray<GNKWaypoint *> *)waypoints eBikeEnergies:(GNKItineraryEBikeEnergies * _Nullable)eBikeEnergies indicesOfWaypointsInGeometry:(NSMutableArray<GNKInt *> *)indicesOfWaypointsInGeometry details:(GNKItinerarySectionDetails * _Nullable)details bikeSharingSystemName:(NSString * _Nullable)bikeSharingSystemName distanceFromItineraryStart:(int32_t)distanceFromItineraryStart index:(int32_t)index bounds:(GNKBounds * _Nullable)bounds __attribute__((swift_name("init(estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:duration:geometry:transportMode:waypoints:eBikeEnergies:indicesOfWaypointsInGeometry:details:bikeSharingSystemName:distanceFromItineraryStart:index:bounds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySection *)doCopyEstimatedDatetimeOfArrival:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfArrival estimatedDatetimeOfDeparture:(GNKKotlinx_datetimeInstant * _Nullable)estimatedDatetimeOfDeparture duration:(int32_t)duration geometry:(NSArray<GNKGeoPoint *> *)geometry transportMode:(GNKTransportMode *)transportMode waypoints:(NSMutableArray<GNKWaypoint *> *)waypoints eBikeEnergies:(GNKItineraryEBikeEnergies * _Nullable)eBikeEnergies indicesOfWaypointsInGeometry:(NSMutableArray<GNKInt *> *)indicesOfWaypointsInGeometry details:(GNKItinerarySectionDetails * _Nullable)details bikeSharingSystemName:(NSString * _Nullable)bikeSharingSystemName distanceFromItineraryStart:(int32_t)distanceFromItineraryStart index:(int32_t)index bounds:(GNKBounds * _Nullable)bounds __attribute__((swift_name("doCopy(estimatedDatetimeOfArrival:estimatedDatetimeOfDeparture:duration:geometry:transportMode:waypoints:eBikeEnergies:indicesOfWaypointsInGeometry:details:bikeSharingSystemName:distanceFromItineraryStart:index:bounds:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isBike __attribute__((swift_name("isBike()")));
- (BOOL)isPedestrian __attribute__((swift_name("isPedestrian()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKItinerarySectionBikeDetails * _Nullable bikeDetails __attribute__((swift_name("bikeDetails")));

/**
 * Name of the bike sharing system (velib or so)
 */
@property NSString * _Nullable bikeSharingSystemName __attribute__((swift_name("bikeSharingSystemName")));

/**
 * max north, min south, max east and min west of the itinerary
 */
@property GNKBounds * _Nullable bounds __attribute__((swift_name("bounds")));
@property (readonly) int32_t calories __attribute__((swift_name("calories")));
@property GNKItinerarySectionDetails * _Nullable details __attribute__((swift_name("details")));

/**
 * Total distance from itinnerary start
 */
@property int32_t distanceFromItineraryStart __attribute__((swift_name("distanceFromItineraryStart")));
@property (readonly) GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * Duration time (in seconds)
 */
@property int32_t duration __attribute__((swift_name("duration")));

/**
 * Energy used for the trip
 */
@property GNKItineraryEBikeEnergies * _Nullable eBikeEnergies __attribute__((swift_name("eBikeEnergies")));
@property (readonly) NSArray<GNKItineraryElevation *> *elevations __attribute__((swift_name("elevations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfArrival __attribute__((swift_name("estimatedDatetimeOfArrival")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/InstantSerializer))
*/
@property GNKKotlinx_datetimeInstant * _Nullable estimatedDatetimeOfDeparture __attribute__((swift_name("estimatedDatetimeOfDeparture")));
@property (readonly) NSArray<GNKItineraryFacility *> *facilities __attribute__((swift_name("facilities")));

/**
 * Ordered points (lat/lon) of the section
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedLineStringSerializer))
*/
@property NSArray<GNKGeoPoint *> *geometry __attribute__((swift_name("geometry")));

/**
 * Index of section in the itinerary
 */
@property int32_t index __attribute__((swift_name("index")));

/**
 * List of index of waypoints in the geometry.
 */
@property NSMutableArray<GNKInt *> *indicesOfWaypointsInGeometry __attribute__((swift_name("indicesOfWaypointsInGeometry")));
@property (readonly) NSArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));

/**
 * Itinerary of the section
 */
@property GNKItinerary * _Nullable itinerary __attribute__((swift_name("itinerary")));
@property (readonly) GNKItinerarySectionPedestrianDetails * _Nullable pedestrianDetails __attribute__((swift_name("pedestrianDetails")));
@property (readonly) GNKItinerarySectionPublicTransportDetails * _Nullable publicTransportDetails __attribute__((swift_name("publicTransportDetails")));
@property (readonly) NSArray<GNKItineraryRoadCyclingQuality *> *roadCyclingQualities __attribute__((swift_name("roadCyclingQualities")));

/**
 * Transport mode used in this section
 */
@property GNKTransportMode *transportMode __attribute__((swift_name("transportMode")));
@property (readonly) int32_t verticalGain __attribute__((swift_name("verticalGain")));
@property (readonly) int32_t verticalLoss __attribute__((swift_name("verticalLoss")));

/**
 * Ordered waypoints (contains start / end / any step given by user or step calculated)
 */
@property NSMutableArray<GNKWaypoint *> *waypoints __attribute__((swift_name("waypoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySection.Companion")))
@interface GNKItinerarySectionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeDetails")))
@interface GNKItinerarySectionBikeDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDetails:(GNKItinerarySectionDetails *)details __attribute__((swift_name("init(details:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSummary:(NSString * _Nullable)summary distances:(GNKRoadTypeDistances *)distances bikeType:(GNKItineraryBikeType *)bikeType bikeProfile:(GNKItineraryBikeProfile *)bikeProfile bikeStations:(GNKItinerarySectionBikeStations * _Nullable)bikeStations averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss isElectricAdapted:(BOOL)isElectricAdapted calories:(int32_t)calories elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions facilities:(NSArray<GNKItineraryFacility *> *)facilities roadCyclingQualities:(NSArray<GNKItineraryRoadCyclingQuality *> *)roadCyclingQualities __attribute__((swift_name("init(summary:distances:bikeType:bikeProfile:bikeStations:averageSpeed:verticalGain:verticalLoss:isElectricAdapted:calories:elevations:instructions:facilities:roadCyclingQualities:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionBikeDetailsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionBikeDetails *)doCopySummary:(NSString * _Nullable)summary distances:(GNKRoadTypeDistances *)distances bikeType:(GNKItineraryBikeType *)bikeType bikeProfile:(GNKItineraryBikeProfile *)bikeProfile bikeStations:(GNKItinerarySectionBikeStations * _Nullable)bikeStations averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss isElectricAdapted:(BOOL)isElectricAdapted calories:(int32_t)calories elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions facilities:(NSArray<GNKItineraryFacility *> *)facilities roadCyclingQualities:(NSArray<GNKItineraryRoadCyclingQuality *> *)roadCyclingQualities __attribute__((swift_name("doCopy(summary:distances:bikeType:bikeProfile:bikeStations:averageSpeed:verticalGain:verticalLoss:isElectricAdapted:calories:elevations:instructions:facilities:roadCyclingQualities:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t averageSpeed __attribute__((swift_name("averageSpeed")));
@property GNKItineraryBikeProfile *bikeProfile __attribute__((swift_name("bikeProfile")));
@property GNKItinerarySectionBikeStations * _Nullable bikeStations __attribute__((swift_name("bikeStations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/ItineraryBikeTypeSerializer))
*/
@property GNKItineraryBikeType *bikeType __attribute__((swift_name("bikeType")));
@property int32_t calories __attribute__((swift_name("calories")));

/**
 * Number of meters of main kinds of roads
 */
@property GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedElevationsSerializer))
*/
@property NSArray<GNKItineraryElevation *> *elevations __attribute__((swift_name("elevations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedFacilitiesSerializer))
*/
@property NSArray<GNKItineraryFacility *> *facilities __attribute__((swift_name("facilities")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedInstructionsSerializer))
*/
@property NSArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));

/**
 * Is the section adapted to electric bikes
 */
@property BOOL isElectricAdapted __attribute__((swift_name("isElectricAdapted")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedRoadCyclingQualitiesSerializer))
*/
@property NSArray<GNKItineraryRoadCyclingQuality *> *roadCyclingQualities __attribute__((swift_name("roadCyclingQualities")));

/**
 * Main road used by the section.
 * (ex: via Rue des champs elysees)
 */
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * Positive elevation in the section
 */
@property int32_t verticalGain __attribute__((swift_name("verticalGain")));

/**
 * Negative elevation in the section
 */
@property int32_t verticalLoss __attribute__((swift_name("verticalLoss")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeDetails.Companion")))
@interface GNKItinerarySectionBikeDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionBikeDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeStationFromTo")))
@interface GNKItinerarySectionBikeStationFromTo : GNKBase <GNKCommonParcelable>
- (instancetype)initWithNear:(NSArray<GNKLong *> *)near selected:(int64_t)selected __attribute__((swift_name("init(near:selected:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionBikeStationFromToCompanion *companion __attribute__((swift_name("companion")));

/**
 * The ids of BikeStations near From / To
 */
@property (readonly) NSArray<GNKLong *> *near __attribute__((swift_name("near")));

/**
 * The id of the bike station used by this itinerary
 */
@property int64_t selected __attribute__((swift_name("selected")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeStationFromTo.Companion")))
@interface GNKItinerarySectionBikeStationFromToCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionBikeStationFromToCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeStations")))
@interface GNKItinerarySectionBikeStations : GNKBase <GNKCommonParcelable>
- (instancetype)initWithFrom:(GNKItinerarySectionBikeStationFromTo * _Nullable)from to:(GNKItinerarySectionBikeStationFromTo * _Nullable)to __attribute__((swift_name("init(from:to:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionBikeStationsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionBikeStations *)doCopyFrom:(GNKItinerarySectionBikeStationFromTo * _Nullable)from to:(GNKItinerarySectionBikeStationFromTo * _Nullable)to __attribute__((swift_name("doCopy(from:to:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * The BikeStations near the itinerary departure
 */
@property (readonly) GNKItinerarySectionBikeStationFromTo * _Nullable from __attribute__((swift_name("from")));

/**
 * The BikeStations near the itinerary arrival
 */
@property (readonly) GNKItinerarySectionBikeStationFromTo * _Nullable to __attribute__((swift_name("to")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionBikeStations.Companion")))
@interface GNKItinerarySectionBikeStationsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionBikeStationsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionDetails")))
@interface GNKItinerarySectionDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithSummary:(NSString * _Nullable)summary distances:(GNKRoadTypeDistances *)distances elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions facilities:(NSArray<GNKItineraryFacility *> *)facilities roadCyclingQualities:(NSArray<GNKItineraryRoadCyclingQuality *> *)roadCyclingQualities bikeType:(GNKItineraryBikeType *)bikeType bikeProfile:(GNKItineraryBikeProfile *)bikeProfile bikeStations:(GNKItinerarySectionBikeStations * _Nullable)bikeStations averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss isElectricAdapted:(BOOL)isElectricAdapted calories:(int32_t)calories ridesets:(NSMutableArray<GNKItinerarySectionRideSet *> *)ridesets lineNetwork:(NSString * _Nullable)lineNetwork lineNumber:(NSString * _Nullable)lineNumber lineDirection:(NSString * _Nullable)lineDirection lineLabel:(NSString * _Nullable)lineLabel lineColor:(NSString * _Nullable)lineColor lineModeLabel:(NSString * _Nullable)lineModeLabel stopPoints:(NSMutableArray<GNKItineraryPublicTransportStopPoint *> *)stopPoints __attribute__((swift_name("init(summary:distances:elevations:instructions:facilities:roadCyclingQualities:bikeType:bikeProfile:bikeStations:averageSpeed:verticalGain:verticalLoss:isElectricAdapted:calories:ridesets:lineNetwork:lineNumber:lineDirection:lineLabel:lineColor:lineModeLabel:stopPoints:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionDetailsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionDetails *)doCopySummary:(NSString * _Nullable)summary distances:(GNKRoadTypeDistances *)distances elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions facilities:(NSArray<GNKItineraryFacility *> *)facilities roadCyclingQualities:(NSArray<GNKItineraryRoadCyclingQuality *> *)roadCyclingQualities bikeType:(GNKItineraryBikeType *)bikeType bikeProfile:(GNKItineraryBikeProfile *)bikeProfile bikeStations:(GNKItinerarySectionBikeStations * _Nullable)bikeStations averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss isElectricAdapted:(BOOL)isElectricAdapted calories:(int32_t)calories ridesets:(NSMutableArray<GNKItinerarySectionRideSet *> *)ridesets lineNetwork:(NSString * _Nullable)lineNetwork lineNumber:(NSString * _Nullable)lineNumber lineDirection:(NSString * _Nullable)lineDirection lineLabel:(NSString * _Nullable)lineLabel lineColor:(NSString * _Nullable)lineColor lineModeLabel:(NSString * _Nullable)lineModeLabel stopPoints:(NSMutableArray<GNKItineraryPublicTransportStopPoint *> *)stopPoints __attribute__((swift_name("doCopy(summary:distances:elevations:instructions:facilities:roadCyclingQualities:bikeType:bikeProfile:bikeStations:averageSpeed:verticalGain:verticalLoss:isElectricAdapted:calories:ridesets:lineNetwork:lineNumber:lineDirection:lineLabel:lineColor:lineModeLabel:stopPoints:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property int32_t averageSpeed __attribute__((swift_name("averageSpeed")));
@property GNKItineraryBikeProfile *bikeProfile __attribute__((swift_name("bikeProfile")));
@property GNKItinerarySectionBikeStations * _Nullable bikeStations __attribute__((swift_name("bikeStations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/ItineraryBikeTypeSerializer))
*/
@property GNKItineraryBikeType *bikeType __attribute__((swift_name("bikeType")));
@property int32_t calories __attribute__((swift_name("calories")));

/**
 * Number of meters of main kinds of roads
 */
@property GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedElevationsSerializer))
*/
@property NSArray<GNKItineraryElevation *> *elevations __attribute__((swift_name("elevations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedFacilitiesSerializer))
*/
@property NSArray<GNKItineraryFacility *> *facilities __attribute__((swift_name("facilities")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedInstructionsSerializer))
*/
@property NSArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));

/**
 * Is the section adapted to electric bikes
 */
@property BOOL isElectricAdapted __attribute__((swift_name("isElectricAdapted")));
@property NSString * _Nullable lineColor __attribute__((swift_name("lineColor")));
@property NSString * _Nullable lineDirection __attribute__((swift_name("lineDirection")));
@property NSString * _Nullable lineLabel __attribute__((swift_name("lineLabel")));
@property NSString * _Nullable lineModeLabel __attribute__((swift_name("lineModeLabel")));
@property NSString * _Nullable lineNetwork __attribute__((swift_name("lineNetwork")));
@property NSString * _Nullable lineNumber __attribute__((swift_name("lineNumber")));
@property NSMutableArray<GNKItinerarySectionRideSet *> *ridesets __attribute__((swift_name("ridesets")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedRoadCyclingQualitiesSerializer))
*/
@property NSArray<GNKItineraryRoadCyclingQuality *> *roadCyclingQualities __attribute__((swift_name("roadCyclingQualities")));
@property NSMutableArray<GNKItineraryPublicTransportStopPoint *> *stopPoints __attribute__((swift_name("stopPoints")));

/**
 * Main road used by the section.
 * (ex: via Rue des champs elysees)
 */
@property NSString * _Nullable summary __attribute__((swift_name("summary")));

/**
 * Positive elevation in the section
 */
@property int32_t verticalGain __attribute__((swift_name("verticalGain")));

/**
 * Negative elevation in the section
 */
@property int32_t verticalLoss __attribute__((swift_name("verticalLoss")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionDetails.Companion")))
@interface GNKItinerarySectionDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionEnergy")))
@interface GNKItinerarySectionEnergy : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDuration:(double)duration battery:(double)battery assistance:(double)assistance calories:(int32_t)calories __attribute__((swift_name("init(duration:battery:assistance:calories:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionEnergyCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionEnergy *)doCopyDuration:(double)duration battery:(double)battery assistance:(double)assistance calories:(int32_t)calories __attribute__((swift_name("doCopy(duration:battery:assistance:calories:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Degree of assistance
 */
@property double assistance __attribute__((swift_name("assistance")));

/**
 * Battery at the end of the trip
 */
@property double battery __attribute__((swift_name("battery")));

/**
 * Burned calories at the end of the trip (not kcal)
 */
@property (readonly) int32_t calories __attribute__((swift_name("calories")));

/**
 * Duration recalculated using energy
 */
@property double duration __attribute__((swift_name("duration")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionEnergy.Companion")))
@interface GNKItinerarySectionEnergyCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionEnergyCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionPedestrianDetails")))
@interface GNKItinerarySectionPedestrianDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDetails:(GNKItinerarySectionDetails *)details __attribute__((swift_name("init(details:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithSummary:(NSString * _Nullable)summary averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss distances:(GNKRoadTypeDistances *)distances calories:(int32_t)calories elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions __attribute__((swift_name("init(summary:averageSpeed:verticalGain:verticalLoss:distances:calories:elevations:instructions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionPedestrianDetailsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionPedestrianDetails *)doCopySummary:(NSString * _Nullable)summary averageSpeed:(int32_t)averageSpeed verticalGain:(int32_t)verticalGain verticalLoss:(int32_t)verticalLoss distances:(GNKRoadTypeDistances *)distances calories:(int32_t)calories elevations:(NSArray<GNKItineraryElevation *> *)elevations instructions:(NSArray<GNKItineraryInstruction *> *)instructions __attribute__((swift_name("doCopy(summary:averageSpeed:verticalGain:verticalLoss:distances:calories:elevations:instructions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Main road used by the section
 */
@property int32_t averageSpeed __attribute__((swift_name("averageSpeed")));
@property int32_t calories __attribute__((swift_name("calories")));
@property GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedElevationsSerializer))
*/
@property NSArray<GNKItineraryElevation *> *elevations __attribute__((swift_name("elevations")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedInstructionsSerializer))
*/
@property NSArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));
@property NSString * _Nullable summary __attribute__((swift_name("summary")));
@property int32_t verticalGain __attribute__((swift_name("verticalGain")));
@property int32_t verticalLoss __attribute__((swift_name("verticalLoss")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionPedestrianDetails.Companion")))
@interface GNKItinerarySectionPedestrianDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionPedestrianDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionPublicTransportDetails")))
@interface GNKItinerarySectionPublicTransportDetails : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDetails:(GNKItinerarySectionDetails *)details __attribute__((swift_name("init(details:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLineNetwork:(NSString * _Nullable)lineNetwork lineNumber:(NSString * _Nullable)lineNumber lineDirection:(NSString * _Nullable)lineDirection lineLabel:(NSString * _Nullable)lineLabel lineColor:(NSString * _Nullable)lineColor lineModeLabel:(NSString * _Nullable)lineModeLabel distances:(GNKRoadTypeDistances *)distances stopPoints:(NSMutableArray<GNKItineraryPublicTransportStopPoint *> *)stopPoints instructions:(NSArray<GNKItineraryInstruction *> *)instructions __attribute__((swift_name("init(lineNetwork:lineNumber:lineDirection:lineLabel:lineColor:lineModeLabel:distances:stopPoints:instructions:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionPublicTransportDetailsCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionPublicTransportDetails *)doCopyLineNetwork:(NSString * _Nullable)lineNetwork lineNumber:(NSString * _Nullable)lineNumber lineDirection:(NSString * _Nullable)lineDirection lineLabel:(NSString * _Nullable)lineLabel lineColor:(NSString * _Nullable)lineColor lineModeLabel:(NSString * _Nullable)lineModeLabel distances:(GNKRoadTypeDistances *)distances stopPoints:(NSMutableArray<GNKItineraryPublicTransportStopPoint *> *)stopPoints instructions:(NSArray<GNKItineraryInstruction *> *)instructions __attribute__((swift_name("doCopy(lineNetwork:lineNumber:lineDirection:lineLabel:lineColor:lineModeLabel:distances:stopPoints:instructions:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property GNKRoadTypeDistances *distances __attribute__((swift_name("distances")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/itinerary/clients/serializers/EncodedInstructionsSerializer))
*/
@property NSArray<GNKItineraryInstruction *> *instructions __attribute__((swift_name("instructions")));
@property NSString * _Nullable lineColor __attribute__((swift_name("lineColor")));
@property NSString * _Nullable lineDirection __attribute__((swift_name("lineDirection")));
@property NSString * _Nullable lineLabel __attribute__((swift_name("lineLabel")));
@property NSString * _Nullable lineModeLabel __attribute__((swift_name("lineModeLabel")));
@property NSString * _Nullable lineNetwork __attribute__((swift_name("lineNetwork")));
@property NSString * _Nullable lineNumber __attribute__((swift_name("lineNumber")));
@property NSMutableArray<GNKItineraryPublicTransportStopPoint *> *stopPoints __attribute__((swift_name("stopPoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionPublicTransportDetails.Companion")))
@interface GNKItinerarySectionPublicTransportDetailsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionPublicTransportDetailsCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionRideSet")))
@interface GNKItinerarySectionRideSet : GNKBase <GNKCommonParcelable>
- (instancetype)initWithName:(NSString *)name instructions_indices:(NSArray<GNKInt *> *)instructions_indices __attribute__((swift_name("init(name:instructions_indices:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItinerarySectionRideSetCompanion *companion __attribute__((swift_name("companion")));
- (GNKItinerarySectionRideSet *)doCopyName:(NSString *)name instructions_indices:(NSArray<GNKInt *> *)instructions_indices __attribute__((swift_name("doCopy(name:instructions_indices:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * Index in instruction list of instructions related to the rideset
 */
@property NSArray<GNKInt *> *instructions_indices __attribute__((swift_name("instructions_indices")));

/**
 * Name of the rideset
 */
@property NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItinerarySectionRideSet.Companion")))
@interface GNKItinerarySectionRideSetCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItinerarySectionRideSetCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryType")))
@interface GNKItineraryType : GNKKotlinEnum<GNKItineraryType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKItineraryTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKItineraryType *recommended __attribute__((swift_name("recommended")));
@property (class, readonly) GNKItineraryType *bis __attribute__((swift_name("bis")));
@property (class, readonly) GNKItineraryType *faster __attribute__((swift_name("faster")));
@property (class, readonly) GNKItineraryType *safer __attribute__((swift_name("safer")));
@property (class, readonly) GNKItineraryType *direct __attribute__((swift_name("direct")));
@property (class, readonly) GNKItineraryType *ride __attribute__((swift_name("ride")));
@property (class, readonly) GNKItineraryType *visit __attribute__((swift_name("visit")));
+ (GNKKotlinArray<GNKItineraryType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKItineraryType *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryType.Companion")))
@interface GNKItineraryTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKItineraryType *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoadTypeDistances")))
@interface GNKRoadTypeDistances : GNKBase <GNKCommonParcelable>
- (instancetype)initWithDiscouragedRoads:(int32_t)discouragedRoads normalRoads:(int32_t)normalRoads recommendedRoads:(int32_t)recommendedRoads total:(int32_t)total cycleway:(int32_t)cycleway greenway:(int32_t)greenway lane:(int32_t)lane livingstreet:(int32_t)livingstreet sharebusway:(int32_t)sharebusway footway:(int32_t)footway pedestrian:(int32_t)pedestrian opposite:(int32_t)opposite steps:(int32_t)steps zone30:(int32_t)zone30 residential:(int32_t)residential cyclingQualityAsphalt:(int32_t)cyclingQualityAsphalt cyclingQualityPath:(int32_t)cyclingQualityPath cyclingQualityDamagedTracks:(int32_t)cyclingQualityDamagedTracks cyclingQualityOther:(int32_t)cyclingQualityOther __attribute__((swift_name("init(discouragedRoads:normalRoads:recommendedRoads:total:cycleway:greenway:lane:livingstreet:sharebusway:footway:pedestrian:opposite:steps:zone30:residential:cyclingQualityAsphalt:cyclingQualityPath:cyclingQualityDamagedTracks:cyclingQualityOther:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKRoadTypeDistancesCompanion *companion __attribute__((swift_name("companion")));
- (GNKRoadTypeDistances *)doCopyDiscouragedRoads:(int32_t)discouragedRoads normalRoads:(int32_t)normalRoads recommendedRoads:(int32_t)recommendedRoads total:(int32_t)total cycleway:(int32_t)cycleway greenway:(int32_t)greenway lane:(int32_t)lane livingstreet:(int32_t)livingstreet sharebusway:(int32_t)sharebusway footway:(int32_t)footway pedestrian:(int32_t)pedestrian opposite:(int32_t)opposite steps:(int32_t)steps zone30:(int32_t)zone30 residential:(int32_t)residential cyclingQualityAsphalt:(int32_t)cyclingQualityAsphalt cyclingQualityPath:(int32_t)cyclingQualityPath cyclingQualityDamagedTracks:(int32_t)cyclingQualityDamagedTracks cyclingQualityOther:(int32_t)cyclingQualityOther __attribute__((swift_name("doCopy(discouragedRoads:normalRoads:recommendedRoads:total:cycleway:greenway:lane:livingstreet:sharebusway:footway:pedestrian:opposite:steps:zone30:residential:cyclingQualityAsphalt:cyclingQualityPath:cyclingQualityDamagedTracks:cyclingQualityOther:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t cycleway __attribute__((swift_name("cycleway")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t cyclingQualityAsphalt __attribute__((swift_name("cyclingQualityAsphalt")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t cyclingQualityDamagedTracks __attribute__((swift_name("cyclingQualityDamagedTracks")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t cyclingQualityOther __attribute__((swift_name("cyclingQualityOther")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t cyclingQualityPath __attribute__((swift_name("cyclingQualityPath")));

/**
 * Distance of not friendly roads (in meters)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t discouragedRoads __attribute__((swift_name("discouragedRoads")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t footway __attribute__((swift_name("footway")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t greenway __attribute__((swift_name("greenway")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t lane __attribute__((swift_name("lane")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t livingstreet __attribute__((swift_name("livingstreet")));

/**
 * Distance of normal roads (in meters)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t normalRoads __attribute__((swift_name("normalRoads")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t opposite __attribute__((swift_name("opposite")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t pedestrian __attribute__((swift_name("pedestrian")));

/**
 * Distance of friendly roads (in meters)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t recommendedRoads __attribute__((swift_name("recommendedRoads")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t residential __attribute__((swift_name("residential")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t sharebusway __attribute__((swift_name("sharebusway")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t steps __attribute__((swift_name("steps")));

/**
 * Total distance (in meters)
 *
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t total __attribute__((swift_name("total")));

/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=fr/geovelo/core/commons/clients/serializers/IntSerializer))
*/
@property int32_t zone30 __attribute__((swift_name("zone30")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RoadTypeDistances.Companion")))
@interface GNKRoadTypeDistancesCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKRoadTypeDistancesCompanion *shared __attribute__((swift_name("shared")));
- (GNKRoadTypeDistances *)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (NSString *)serializeRoadTypeDistances:(GNKRoadTypeDistances *)roadTypeDistances __attribute__((swift_name("serialize(roadTypeDistances:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransportMode")))
@interface GNKTransportMode : GNKKotlinEnum<GNKTransportMode *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKTransportModeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKTransportMode *bike __attribute__((swift_name("bike")));
@property (class, readonly) GNKTransportMode *pedestrian __attribute__((swift_name("pedestrian")));
@property (class, readonly) GNKTransportMode *publicTransport __attribute__((swift_name("publicTransport")));
+ (GNKKotlinArray<GNKTransportMode *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKTransportMode *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TransportMode.Companion")))
@interface GNKTransportModeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKTransportModeCompanion *shared __attribute__((swift_name("shared")));
- (GNKTransportMode *)fromStringValue:(NSString *)value __attribute__((swift_name("fromString(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ClientOptions")))
@interface GNKClientOptions : GNKBase
- (instancetype)initWithSource:(NSString * _Nullable)source showPushingBikeInstructions:(BOOL)showPushingBikeInstructions showRideItinerary:(BOOL)showRideItinerary testEnvironment:(BOOL)testEnvironment roadCyclingQuality:(BOOL)roadCyclingQuality preconfiguredHttpClient:(GNKPreconfiguredHttpClient * _Nullable)preconfiguredHttpClient userAuthorizationProvider:(id<GNKUserAuthorizationProvider> _Nullable)userAuthorizationProvider userAgent:(NSString * _Nullable)userAgent __attribute__((swift_name("init(source:showPushingBikeInstructions:showRideItinerary:testEnvironment:roadCyclingQuality:preconfiguredHttpClient:userAuthorizationProvider:userAgent:)"))) __attribute__((objc_designated_initializer));
- (GNKClientOptions *)doCopySource:(NSString * _Nullable)source showPushingBikeInstructions:(BOOL)showPushingBikeInstructions showRideItinerary:(BOOL)showRideItinerary testEnvironment:(BOOL)testEnvironment roadCyclingQuality:(BOOL)roadCyclingQuality preconfiguredHttpClient:(GNKPreconfiguredHttpClient * _Nullable)preconfiguredHttpClient userAuthorizationProvider:(id<GNKUserAuthorizationProvider> _Nullable)userAuthorizationProvider userAgent:(NSString * _Nullable)userAgent __attribute__((swift_name("doCopy(source:showPushingBikeInstructions:showRideItinerary:testEnvironment:roadCyclingQuality:preconfiguredHttpClient:userAuthorizationProvider:userAgent:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property GNKPreconfiguredHttpClient * _Nullable preconfiguredHttpClient __attribute__((swift_name("preconfiguredHttpClient")));
@property (readonly) BOOL roadCyclingQuality __attribute__((swift_name("roadCyclingQuality")));
@property (readonly) BOOL showPushingBikeInstructions __attribute__((swift_name("showPushingBikeInstructions")));
@property (readonly) BOOL showRideItinerary __attribute__((swift_name("showRideItinerary")));
@property (readonly) NSString * _Nullable source __attribute__((swift_name("source")));
@property (readonly) BOOL testEnvironment __attribute__((swift_name("testEnvironment")));
@property (readonly) NSString * _Nullable userAgent __attribute__((swift_name("userAgent")));
@property id<GNKUserAuthorizationProvider> _Nullable userAuthorizationProvider __attribute__((swift_name("userAuthorizationProvider")));
@end

__attribute__((swift_name("ItineraryCallback")))
@protocol GNKItineraryCallback
@required
- (void)failure __attribute__((swift_name("failure()")));
- (void)successItinerary:(GNKItinerary *)itinerary __attribute__((swift_name("success(itinerary:)")));
@end

__attribute__((swift_name("ItineraryClient")))
@protocol GNKItineraryClient
@required
- (void)loadItinerariesItineraryRequest:(GNKItineraryRequest *)itineraryRequest callback:(id<GNKItineraryListCallback>)callback __attribute__((swift_name("loadItineraries(itineraryRequest:callback:)")));
- (void)loadItineraryDetailsItineraryId:(NSString *)itineraryId callback:(id<GNKItineraryCallback>)callback __attribute__((swift_name("loadItineraryDetails(itineraryId:callback:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryClientContract")))
@interface GNKItineraryClientContract : GNKBase
- (instancetype)initWithTestEnvironment:(BOOL)testEnvironment __attribute__((swift_name("init(testEnvironment:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKItineraryClientContractCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)loadItinerariesDetailsUrlItineraryId:(NSString *)itineraryId __attribute__((swift_name("loadItinerariesDetailsUrl(itineraryId:)")));
- (NSString *)loadItinerariesToGeometryUrl __attribute__((swift_name("loadItinerariesToGeometryUrl()")));
- (NSString *)loadItinerariesUrl __attribute__((swift_name("loadItinerariesUrl()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryClientContract.Companion")))
@interface GNKItineraryClientContractCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryClientContractCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) NSString *rootBackendDevUrl __attribute__((swift_name("rootBackendDevUrl")));
@property (readonly) NSString *rootBackendProdUrl __attribute__((swift_name("rootBackendProdUrl")));
@end

__attribute__((swift_name("ItineraryListCallback")))
@protocol GNKItineraryListCallback
@required
- (void)failure __attribute__((swift_name("failure()")));
- (void)successItineraries:(NSArray<GNKItinerary *> *)itineraries __attribute__((swift_name("success(itineraries:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MultiPlatformItineraryClient")))
@interface GNKMultiPlatformItineraryClient : GNKBase <GNKItineraryClient>
- (instancetype)initWithApiKey:(NSString *)apiKey clientOptions:(GNKClientOptions *)clientOptions client:(GNKKtor_client_coreHttpClient *)client exceptionListener:(id<GNKExceptionHandler>)exceptionListener logHandler:(id<GNKLogHandler>)logHandler __attribute__((swift_name("init(apiKey:clientOptions:client:exceptionListener:logHandler:)"))) __attribute__((objc_designated_initializer));
- (void)loadItinerariesItineraryRequest:(GNKItineraryRequest *)itineraryRequest callback:(id<GNKItineraryListCallback>)callback __attribute__((swift_name("loadItineraries(itineraryRequest:callback:)")));
- (void)loadItineraryDetailsItineraryId:(NSString *)itineraryId callback:(id<GNKItineraryCallback>)callback __attribute__((swift_name("loadItineraryDetails(itineraryId:callback:)")));
@property (readonly) NSString *apiKey __attribute__((swift_name("apiKey")));
@property (readonly) GNKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property GNKItineraryClientContract *clientContract __attribute__((swift_name("clientContract")));
@property (readonly) GNKClientOptions *clientOptions __attribute__((swift_name("clientOptions")));
@property (readonly) id<GNKExceptionHandler> exceptionListener __attribute__((swift_name("exceptionListener")));
@property (readonly) id<GNKLogHandler> logHandler __attribute__((swift_name("logHandler")));
@property id<GNKKotlinCoroutineContext> _Nullable testContext __attribute__((swift_name("testContext")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PreconfiguredHttpClient")))
@interface GNKPreconfiguredHttpClient : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("UserAuthorizationProvider")))
@protocol GNKUserAuthorizationProvider
@required
- (NSString * _Nullable)getAuthorizationToken __attribute__((swift_name("getAuthorizationToken()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol GNKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol GNKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol GNKKotlinx_serialization_coreKSerializer <GNKKotlinx_serialization_coreSerializationStrategy, GNKKotlinx_serialization_coreDeserializationStrategy>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedElevationsSerializer")))
@interface GNKEncodedElevationsSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encodedElevationsSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKEncodedElevationsSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<GNKItineraryElevation *> *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<GNKItineraryElevation *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedFacilitiesSerializer")))
@interface GNKEncodedFacilitiesSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encodedFacilitiesSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKEncodedFacilitiesSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<GNKItineraryFacility *> *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<GNKItineraryFacility *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedInstructionsSerializer")))
@interface GNKEncodedInstructionsSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encodedInstructionsSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKEncodedInstructionsSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<GNKItineraryInstruction *> *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<GNKItineraryInstruction *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedInstructionsSerializer.EncodedInstructionHeader")))
@interface GNKEncodedInstructionsSerializerEncodedInstructionHeader : GNKKotlinEnum<GNKEncodedInstructionsSerializerEncodedInstructionHeader *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *citynames __attribute__((swift_name("citynames")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *roadname __attribute__((swift_name("roadname")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *direction __attribute__((swift_name("direction")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *cyclability __attribute__((swift_name("cyclability")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *roadlength __attribute__((swift_name("roadlength")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *orientation __attribute__((swift_name("orientation")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *duration __attribute__((swift_name("duration")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *facility __attribute__((swift_name("facility")));
@property (class, readonly) GNKEncodedInstructionsSerializerEncodedInstructionHeader *geometryindex __attribute__((swift_name("geometryindex")));
+ (GNKKotlinArray<GNKEncodedInstructionsSerializerEncodedInstructionHeader *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKEncodedInstructionsSerializerEncodedInstructionHeader *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedLineStringSerializer")))
@interface GNKEncodedLineStringSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encodedLineStringSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKEncodedLineStringSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<GNKGeoPoint *> *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<GNKGeoPoint *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("EncodedRoadCyclingQualitiesSerializer")))
@interface GNKEncodedRoadCyclingQualitiesSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)encodedRoadCyclingQualitiesSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKEncodedRoadCyclingQualitiesSerializer *shared __attribute__((swift_name("shared")));
- (NSArray<GNKItineraryRoadCyclingQuality *> *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(NSArray<GNKItineraryRoadCyclingQuality *> *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryBikeTypeSerializer")))
@interface GNKItineraryBikeTypeSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)itineraryBikeTypeSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKItineraryBikeTypeSerializer *shared __attribute__((swift_name("shared")));
- (GNKItineraryBikeType *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(GNKItineraryBikeType *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeometryEncoder")))
@interface GNKGeometryEncoder : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) GNKGeometryEncoderCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeometryEncoder.Companion")))
@interface GNKGeometryEncoderCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeometryEncoderCompanion *shared __attribute__((swift_name("shared")));
- (NSArray<GNKGeoPoint *> *)decodeGeometry:(NSString *)geometry __attribute__((swift_name("decode(geometry:)")));

/**
 * Encodes a sequence of LatLngs into an encoded path string.
 */
- (NSString *)encodePath:(NSArray<GNKGeoPoint *> *)path __attribute__((swift_name("encode(path:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestBuilderException")))
@interface GNKRequestBuilderException : GNKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKRequestBuilderExceptionCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) NSString *message __attribute__((swift_name("message")));
@property (readonly) GNKRequestBuilderExceptionType *type __attribute__((swift_name("type")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestBuilderException.Companion")))
@interface GNKRequestBuilderExceptionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKRequestBuilderExceptionCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKRequestBuilderException *InvalidTransportMode __attribute__((swift_name("InvalidTransportMode")));
@property (readonly) GNKRequestBuilderException *NotEnoughWaypoints __attribute__((swift_name("NotEnoughWaypoints")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RequestBuilderException.Type_")))
@interface GNKRequestBuilderExceptionType : GNKKotlinEnum<GNKRequestBuilderExceptionType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GNKRequestBuilderExceptionType *notenoughwaypoints __attribute__((swift_name("notenoughwaypoints")));
@property (class, readonly) GNKRequestBuilderExceptionType *invalidtransportmode __attribute__((swift_name("invalidtransportmode")));
+ (GNKKotlinArray<GNKRequestBuilderExceptionType *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKRequestBuilderExceptionType *> *entries __attribute__((swift_name("entries")));
@end


/**
 * Represents bounds on a cartesian plane.
 *
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bounds")))
@interface GNKBounds : GNKBase <GNKCommonParcelable>
- (instancetype)initWithBounds:(GNKBounds *)bounds __attribute__((swift_name("init(bounds:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPoints:(NSArray<GNKGeoPoint *> *)points __attribute__((swift_name("init(points:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithGeoPoint:(GNKGeoPoint *)geoPoint distanceInMeters:(int32_t)distanceInMeters __attribute__((swift_name("init(geoPoint:distanceInMeters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithWest:(double)west east:(double)east north:(double)north south:(double)south __attribute__((swift_name("init(west:east:north:south:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKBoundsCompanion *companion __attribute__((swift_name("companion")));
- (void)addBoundsBounds:(GNKBounds *)bounds __attribute__((swift_name("addBounds(bounds:)")));
- (BOOL)containsBounds:(GNKBounds *)bounds __attribute__((swift_name("contains(bounds:)")));
- (BOOL)containsPoint:(GNKGeoPoint *)point __attribute__((swift_name("contains(point:)")));
- (BOOL)containsSegment:(GNKGeoSegment *)segment __attribute__((swift_name("contains(segment:)")));
- (BOOL)containsLongitude:(double)longitude latitude:(double)latitude __attribute__((swift_name("contains(longitude:latitude:)")));

/**
 * Represents bounds on a cartesian plane.
 */
- (GNKBounds *)doCopyWest:(double)west east:(double)east north:(double)north south:(double)south __attribute__((swift_name("doCopy(west:east:north:south:)")));

/**
 * Represents bounds on a cartesian plane.
 */
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (void)expandRatio:(double)ratio __attribute__((swift_name("expand(ratio:)")));

/**
 * Represents bounds on a cartesian plane.
 */
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)intersectsBounds:(GNKBounds *)bounds __attribute__((swift_name("intersects(bounds:)")));

/**
 * Check if the segments intersects with the bounds (without checking if points are inside)
 *
 * @param segment
 * @return true if the segments intersects with the bounds
 */
- (BOOL)intersectsSegment:(GNKGeoSegment *)segment __attribute__((swift_name("intersects(segment:)")));
- (BOOL)intersectsWest:(double)west east:(double)east north:(double)north south:(double)south __attribute__((swift_name("intersects(west:east:north:south:)")));

/**
 * Represents bounds on a cartesian plane.
 */
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double area __attribute__((swift_name("area")));
@property (readonly) GNKGeoPoint *center __attribute__((swift_name("center")));
@property double east __attribute__((swift_name("east")));
@property (readonly) double midLatitude __attribute__((swift_name("midLatitude")));
@property (readonly) double midLongitude __attribute__((swift_name("midLongitude")));
@property double north __attribute__((swift_name("north")));
@property double south __attribute__((swift_name("south")));
@property double west __attribute__((swift_name("west")));
@end


/**
 * Represents bounds on a cartesian plane.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Bounds.Companion")))
@interface GNKBoundsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));

/**
 * Represents bounds on a cartesian plane.
 */
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKBoundsCompanion *shared __attribute__((swift_name("shared")));

/**
 * Represents bounds on a cartesian plane.
 */
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoLocation")))
@interface GNKGeoLocation : GNKBase <GNKCommonParcelable>
- (instancetype)initWithGeoPoint:(GNKGeoPoint *)geoPoint speed:(float)speed bearing:(float)bearing accuracy:(double)accuracy isFake:(BOOL)isFake createdEpochMilliSecond:(GNKLong * _Nullable)createdEpochMilliSecond __attribute__((swift_name("init(geoPoint:speed:bearing:accuracy:isFake:createdEpochMilliSecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKGeoLocationCompanion *companion __attribute__((swift_name("companion")));
- (GNKGeoLocation *)doCopyGeoPoint:(GNKGeoPoint *)geoPoint speed:(float)speed bearing:(float)bearing accuracy:(double)accuracy isFake:(BOOL)isFake createdEpochMilliSecond:(GNKLong * _Nullable)createdEpochMilliSecond __attribute__((swift_name("doCopy(geoPoint:speed:bearing:accuracy:isFake:createdEpochMilliSecond:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) double accuracy __attribute__((swift_name("accuracy")));
@property (readonly) float bearing __attribute__((swift_name("bearing")));
@property (readonly) GNKLong * _Nullable createdEpochMilliSecond __attribute__((swift_name("createdEpochMilliSecond")));
@property (readonly) GNKGeoPoint *geoPoint __attribute__((swift_name("geoPoint")));
@property (readonly) BOOL isFake __attribute__((swift_name("isFake")));
@property (readonly) float speed __attribute__((swift_name("speed")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoLocation.Companion")))
@interface GNKGeoLocationCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeoLocationCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPoint")))
@interface GNKGeoPoint : GNKBase <GNKCommonParcelable>
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude __attribute__((swift_name("init(latitude:longitude:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude __attribute__((swift_name("init(latitude:longitude:altitude:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKGeoPointCompanion *companion __attribute__((swift_name("companion")));
- (double)angleToGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("angleTo(geoPoint:)")));

/**
 * http://www.movable-type.co.uk/scripts/latlong.html
 */
- (double)bearingToGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("bearingTo(geoPoint:)")));
- (GNKGeoPoint *)doCopyLatitude:(double)latitude longitude:(double)longitude altitude:(double)altitude __attribute__((swift_name("doCopy(latitude:longitude:altitude:)")));

/**
 * @return distance in meters
 * @see [GPSDistance.html](http://www.geocities.com/DrChengalva/GPSDistance.html)
 */
- (double)distanceToGeoPoint:(GNKGeoPoint * _Nullable)geoPoint __attribute__((swift_name("distanceTo(geoPoint:)")));
- (double)distanceToGeoPoint:(GNKGeoPoint * _Nullable)geoPoint useEarthRadius:(BOOL)useEarthRadius __attribute__((swift_name("distanceTo(geoPoint:useEarthRadius:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double altitude __attribute__((swift_name("altitude")));
@property double latitude __attribute__((swift_name("latitude")));
@property double longitude __attribute__((swift_name("longitude")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPoint.Companion")))
@interface GNKGeoPointCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeoPointCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) double DEG2RAD __attribute__((swift_name("DEG2RAD")));
@property (readonly) double NB_METERS_BETWEEN_2_EARTH_DEGREES __attribute__((swift_name("NB_METERS_BETWEEN_2_EARTH_DEGREES")));
@property (readonly) double RAD2DEG __attribute__((swift_name("RAD2DEG")));
@property (readonly) double RADIUS_EARTH_METERS __attribute__((swift_name("RADIUS_EARTH_METERS")));
@end

__attribute__((swift_name("GeoPointable")))
@protocol GNKGeoPointable
@required
- (GNKGeoPoint *)getPoint __attribute__((swift_name("getPoint()")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoSegment")))
@interface GNKGeoSegment : GNKBase <GNKCommonParcelable>
- (instancetype)initWithStart:(GNKGeoPoint *)start end:(GNKGeoPoint *)end __attribute__((swift_name("init(start:end:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKGeoSegmentCompanion *companion __attribute__((swift_name("companion")));
- (GNKGeoSegment *)doCopyStart:(GNKGeoPoint *)start end:(GNKGeoPoint *)end __attribute__((swift_name("doCopy(start:end:)")));
- (double)distanceToGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("distanceTo(geoPoint:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (double)getVerticalAngle __attribute__((swift_name("getVerticalAngle()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (GNKGeoPoint *)projectGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("project(geoPoint:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKGeoPoint *center __attribute__((swift_name("center")));
@property GNKGeoPoint *end __attribute__((swift_name("end")));
@property GNKGeoPoint *start __attribute__((swift_name("start")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoSegment.Companion")))
@interface GNKGeoSegmentCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeoSegmentCompanion *shared __attribute__((swift_name("shared")));

/**
 * Tells whether the two line segments cross.
 *
 * @param x1 the x coordinate of the starting point of the first segment.
 * @param y1 the y coordinate of the starting point of the first segment.
 * @param x2 the x coordinate of the end point of the first segment.
 * @param y2 the y coordinate of the end point of the first segment.
 * @param x3 the x coordinate of the starting point of the second segment.
 * @param y3 the y coordinate of the starting point of the second segment.
 * @param x4 the x coordinate of the end point of the second segment.
 * @param y4 the y coordinate of the end point of the second segment.
 * @return true, if the two line segments cross.
 */
- (BOOL)linesIntersectX1:(double)x1 y1:(double)y1 x2:(double)x2 y2:(double)y2 x3:(double)x3 y3:(double)y3 x4:(double)x4 y4:(double)y4 __attribute__((swift_name("linesIntersect(x1:y1:x2:y2:x3:y3:x4:y4:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end


/**
 * A quad tree which tracks items with a Point geometry.
 * See http://en.wikipedia.org/wiki/Quadtree for details on the data structure.
 * This class is not thread safe.
 */
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoSegmentQuadTree")))
@interface GNKGeoSegmentQuadTree : GNKBase
- (instancetype)initWithBounds:(GNKBounds *)bounds __attribute__((swift_name("init(bounds:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKGeoSegmentQuadTreeCompanion *companion __attribute__((swift_name("companion")));

/**
 * Insert an item.
 */
- (BOOL)addSegment:(id<GNKGeoSegmentable>)segment __attribute__((swift_name("add(segment:)")));

/**
 * Removes all points from the quadTree
 */
- (void)clear __attribute__((swift_name("clear()")));

/**
 * Remove the given item from the set.
 *
 * @return whether the item was removed.
 */
- (BOOL)removeSegment:(id<GNKGeoSegmentable>)segment __attribute__((swift_name("remove(segment:)")));
- (NSArray<id<GNKGeoSegmentable>> *)searchBounds:(GNKBounds *)bounds __attribute__((swift_name("search(bounds:)")));

/**
 * Search for all items near a geoPoint
 */
- (NSArray<id<GNKGeoSegmentable>> *)searchGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("search(geoPoint:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoSegmentQuadTree.Companion")))
@interface GNKGeoSegmentQuadTreeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKGeoSegmentQuadTreeCompanion *shared __attribute__((swift_name("shared")));

/**
 * Maximum number of elements to store in a quad before splitting.
 */
@property int32_t MAX_ELEMENTS __attribute__((swift_name("MAX_ELEMENTS")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Waypoint")))
@interface GNKWaypoint : GNKBase <GNKCommonParcelable>
- (instancetype)initWithTitle:(NSString * _Nullable)title geoPoint:(GNKGeoPoint *)geoPoint poiId:(GNKLong * _Nullable)poiId __attribute__((swift_name("init(title:geoPoint:poiId:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithTitle:(NSString * _Nullable)title latitude:(double)latitude longitude:(double)longitude poiId:(GNKLong * _Nullable)poiId __attribute__((swift_name("init(title:latitude:longitude:poiId:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKWaypointCompanion *companion __attribute__((swift_name("companion")));
- (GNKWaypoint *)doCopyTitle:(NSString * _Nullable)title latitude:(double)latitude longitude:(double)longitude poiId:(GNKLong * _Nullable)poiId __attribute__((swift_name("doCopy(title:latitude:longitude:poiId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (BOOL)hasSameLocationWaypoint:(GNKWaypoint *)waypoint __attribute__((swift_name("hasSameLocation(waypoint:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (GNKGeoPoint *)toGeoPoint __attribute__((swift_name("toGeoPoint()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property double latitude __attribute__((swift_name("latitude")));
@property double longitude __attribute__((swift_name("longitude")));
@property (readonly) GNKLong * _Nullable poiId __attribute__((swift_name("poiId")));
@property NSString * _Nullable title __attribute__((swift_name("title")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Waypoint.Companion")))
@interface GNKWaypointCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKWaypointCompanion *shared __attribute__((swift_name("shared")));
- (GNKWaypoint *)deserializeJson:(NSString *)json __attribute__((swift_name("deserialize(json:)")));
- (NSString *)serializeWaypoint:(GNKWaypoint *)waypoint __attribute__((swift_name("serialize(waypoint:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((swift_name("LogHandler")))
@protocol GNKLogHandler
@required
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultLogHandler")))
@interface GNKDefaultLogHandler : GNKBase <GNKLogHandler>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)logMessage:(NSString *)message __attribute__((swift_name("log(message:)")));
@end

__attribute__((swift_name("KotlinRuntimeException")))
@interface GNKKotlinRuntimeException : GNKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkException")))
@interface GNKNetworkException : GNKKotlinRuntimeException
- (instancetype)initWithStatus:(GNKKtor_httpHttpStatusCode *)status request:(NSString *)request __attribute__((swift_name("init(status:request:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) NSString *request __attribute__((swift_name("request")));
@property (readonly) GNKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantSerializer")))
@interface GNKInstantSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)instantSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKInstantSerializer *shared __attribute__((swift_name("shared")));
- (GNKKotlinx_datetimeInstant *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(GNKKotlinx_datetimeInstant *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IntSerializer")))
@interface GNKIntSerializer : GNKBase <GNKKotlinx_serialization_coreKSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)intSerializer __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKIntSerializer *shared __attribute__((swift_name("shared")));
- (GNKInt *)deserializeDecoder:(id<GNKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (void)serializeEncoder:(id<GNKKotlinx_serialization_coreEncoder>)encoder value:(GNKInt *)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<GNKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonDefaults")))
@interface GNKJsonDefaults : GNKBase
@property (class, readonly, getter=companion) GNKJsonDefaultsCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("JsonDefaults.Companion")))
@interface GNKJsonDefaultsCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKJsonDefaultsCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKotlinx_serialization_jsonJson *client __attribute__((swift_name("client")));
@property (readonly) GNKKotlinx_serialization_jsonJson *decoder __attribute__((swift_name("decoder")));
@property (readonly) BOOL defaultAllowSpecialFloatingPointValues __attribute__((swift_name("defaultAllowSpecialFloatingPointValues")));
@property (readonly) BOOL defaultCoerceInputValues __attribute__((swift_name("defaultCoerceInputValues")));
@property (readonly) BOOL defaultEncodeDefaults __attribute__((swift_name("defaultEncodeDefaults")));
@property (readonly) BOOL defaultExplicitNulls __attribute__((swift_name("defaultExplicitNulls")));
@property (readonly) BOOL defaultIgnoreUnknownKeys __attribute__((swift_name("defaultIgnoreUnknownKeys")));
@property (readonly) BOOL defaultIsLenient __attribute__((swift_name("defaultIsLenient")));
@property (readonly) GNKKotlinx_serialization_jsonJson *encoder __attribute__((swift_name("encoder")));
@end

__attribute__((swift_name("CommonParceler")))
@protocol GNKCommonParceler
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("InstantParceler")))
@interface GNKInstantParceler : GNKBase <GNKCommonParceler>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)instantParceler __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKInstantParceler *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Resource")))
@interface GNKResource : GNKBase
- (instancetype)initWithPath:(NSString *)path __attribute__((swift_name("init(path:)"))) __attribute__((objc_designated_initializer));

/**
 * Returns true when the resource exists, false when it doesn't.
 */
- (BOOL)exists __attribute__((swift_name("exists()")));

/**
 * Returns the resource's content as a string.
 *
 * @throws RuntimeException when the resource doesn't exist or can't be read.
 */
- (NSString *)readAsString __attribute__((swift_name("readAsString()")));
@property NSString *platformDirectory __attribute__((swift_name("platformDirectory")));
@end

__attribute__((swift_name("ExceptionHandler")))
@protocol GNKExceptionHandler
@required
- (void)handleE:(GNKKotlinThrowable *)e __attribute__((swift_name("handle(e:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DefaultExceptionHandler")))
@interface GNKDefaultExceptionHandler : GNKBase <GNKExceptionHandler>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)handleE:(GNKKotlinThrowable *)e __attribute__((swift_name("handle(e:)")));
@end

@interface GNKNavigationManager (Extensions)
- (void)addLifecycleListenerLifecycleListener:(id<GNKNavigationLifecycleListener>)lifecycleListener __attribute__((swift_name("addLifecycleListener(lifecycleListener:)")));
- (void)addProgressListenerProgressListener:(id<GNKNavigationProgressListener>)progressListener __attribute__((swift_name("addProgressListener(progressListener:)")));
- (void)addRecalculateListenerRecalculateListener:(id<GNKNavigationRecalculateListener>)recalculateListener __attribute__((swift_name("addRecalculateListener(recalculateListener:)")));
- (void)updateLocationLocation_:(CLLocation *)location __attribute__((swift_name("updateLocation(location_:)")));
@end

@interface GNKItineraryRequestBuilderCompanion (Extensions)
- (GNKItineraryRequestBuilder *)create __attribute__((swift_name("create()")));
@end

@interface GNKItinerary (Extensions)
- (double)distanceToGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("distanceTo(geoPoint:)")));
@end

@interface GNKItinerarySection (Extensions)
- (double)distanceToGeoPoint:(GNKGeoPoint *)geoPoint __attribute__((swift_name("distanceTo(geoPoint:)")));
@end

@interface GNKItineraryInstruction (Extensions)
- (NSString *)serialize __attribute__((swift_name("serialize()")));
@end

__attribute__((swift_name("Ktor_httpHttpMessage")))
@protocol GNKKtor_httpHttpMessage
@required
@property (readonly) id<GNKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol GNKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<GNKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end

__attribute__((swift_name("Ktor_client_coreHttpResponse")))
@interface GNKKtor_client_coreHttpResponse : GNKBase <GNKKtor_httpHttpMessage, GNKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) id<GNKKtor_ioByteReadChannel> content __attribute__((swift_name("content")));
@property (readonly) GNKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) GNKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) GNKKtor_httpHttpStatusCode *status __attribute__((swift_name("status")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

@interface GNKKtor_client_coreHttpResponse (Extensions)
- (void)throwIfError __attribute__((swift_name("throwIfError()")));
@end

@interface GNKResource (Extensions)
- (GNKResource *)android __attribute__((swift_name("android()")));
- (GNKResource *)common __attribute__((swift_name("common()")));
- (GNKResource *)ios __attribute__((swift_name("ios()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("IosItineraryClientKt")))
@interface GNKIosItineraryClientKt : GNKBase
+ (GNKKtor_client_coreHttpClient *)makeItineraryClientClientOptions:(GNKClientOptions *)clientOptions __attribute__((swift_name("makeItineraryClient(clientOptions:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationLifecycleListenerExtensionsKt")))
@interface GNKNavigationLifecycleListenerExtensionsKt : GNKBase
+ (void)onNavigationContinueOnNextItinerary:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver itinerary:(GNKItinerary *)itinerary __attribute__((swift_name("onNavigationContinueOnNextItinerary(_:itinerary:)")));
+ (void)onNavigationContinueOnNextSection:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver section:(GNKItinerarySection *)section __attribute__((swift_name("onNavigationContinueOnNextSection(_:section:)")));
+ (void)onNavigationPaused:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver __attribute__((swift_name("onNavigationPaused(_:)")));
+ (void)onNavigationReachedArrival:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver currentItinerary:(GNKItinerary *)currentItinerary currentSection:(GNKItinerarySection *)currentSection __attribute__((swift_name("onNavigationReachedArrival(_:currentItinerary:currentSection:)")));
+ (void)onNavigationReachedEndOfIntermediateItinerary:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver currentItinerary:(GNKItinerary *)currentItinerary nextItinerary:(GNKItinerary *)nextItinerary __attribute__((swift_name("onNavigationReachedEndOfIntermediateItinerary(_:currentItinerary:nextItinerary:)")));
+ (void)onNavigationReachedEndOfIntermediateSection:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver currentSection:(GNKItinerarySection *)currentSection nextSection:(GNKItinerarySection *)nextSection __attribute__((swift_name("onNavigationReachedEndOfIntermediateSection(_:currentSection:nextSection:)")));
+ (void)onNavigationReachedIntermediateWaypoint:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver waypoint:(GNKWaypoint *)waypoint __attribute__((swift_name("onNavigationReachedIntermediateWaypoint(_:waypoint:)")));
+ (void)onNavigationResumed:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver __attribute__((swift_name("onNavigationResumed(_:)")));
+ (void)onNavigationStarted:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver itinerary:(GNKItinerary *)itinerary section:(GNKItinerarySection *)section __attribute__((swift_name("onNavigationStarted(_:itinerary:section:)")));
+ (void)onNavigationStopped:(NSMutableArray<id<GNKNavigationLifecycleListener>> *)receiver __attribute__((swift_name("onNavigationStopped(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationProgressListenerExtensionsKt")))
@interface GNKNavigationProgressListenerExtensionsKt : GNKBase
+ (void)onNavigationOffTrack:(NSMutableArray<id<GNKNavigationProgressListener>> *)receiver __attribute__((swift_name("onNavigationOffTrack(_:)")));
+ (void)onNavigationProgressChanged:(NSMutableArray<id<GNKNavigationProgressListener>> *)receiver navigationProgress:(GNKNavigationProgress *)navigationProgress __attribute__((swift_name("onNavigationProgressChanged(_:navigationProgress:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NavigationRecalculateListenerExtensionsKt")))
@interface GNKNavigationRecalculateListenerExtensionsKt : GNKBase
+ (void)onNavigationRecalculationFail:(NSMutableArray<id<GNKNavigationRecalculateListener>> *)receiver __attribute__((swift_name("onNavigationRecalculationFail(_:)")));
+ (void)onNavigationRecalculationSuccess:(NSMutableArray<id<GNKNavigationRecalculateListener>> *)receiver itinerary:(GNKItinerary *)itinerary __attribute__((swift_name("onNavigationRecalculationSuccess(_:itinerary:)")));
+ (void)onNavigationStartRecalculating:(NSMutableArray<id<GNKNavigationRecalculateListener>> *)receiver __attribute__((swift_name("onNavigationStartRecalculating(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItineraryExtensionsKt")))
@interface GNKItineraryExtensionsKt : GNKBase
+ (GNKItinerary * _Nullable)firstOfType:(NSMutableArray<GNKItinerary *> *)receiver type:(GNKItineraryType *)type __attribute__((swift_name("firstOfType(_:type:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPointListsExtensionsKt")))
@interface GNKGeoPointListsExtensionsKt : GNKBase
+ (GNKBounds *)getBounds:(NSArray<GNKGeoPoint *> *)receiver __attribute__((swift_name("getBounds(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GeoPointListOfListsExtensionsKt")))
@interface GNKGeoPointListOfListsExtensionsKt : GNKBase
+ (GNKBounds *)getBounds:(NSArray<NSArray<GNKGeoPoint *> *> *)receiver __attribute__((swift_name("getBounds(_:)")));
+ (GNKGeoPoint *)getCenter:(NSArray<NSArray<GNKGeoPoint *> *> *)receiver __attribute__((swift_name("getCenter(_:)")));
+ (GNKGeoPoint *)getHalfWayGeoPoint:(NSArray<NSArray<GNKGeoPoint *> *> *)receiver __attribute__((swift_name("getHalfWayGeoPoint(_:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("DoubleExtensionsKt")))
@interface GNKDoubleExtensionsKt : GNKBase
+ (double)round:(double)receiver decimals:(int32_t)decimals __attribute__((swift_name("round(_:decimals:)")));
+ (double)toDegree:(double)receiver __attribute__((swift_name("toDegree(_:)")));
+ (double)toRadian:(double)receiver __attribute__((swift_name("toRadian(_:)")));
@end

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface GNKKotlinIllegalArgumentException : GNKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/datetime/serializers/InstantIso8601Serializer))
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant")))
@interface GNKKotlinx_datetimeInstant : GNKBase <GNKKotlinComparable>
@property (class, readonly, getter=companion) GNKKotlinx_datetimeInstantCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(GNKKotlinx_datetimeInstant *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (GNKKotlinx_datetimeInstant *)minusDuration:(int64_t)duration __attribute__((swift_name("minus(duration:)")));
- (int64_t)minusOther:(GNKKotlinx_datetimeInstant *)other __attribute__((swift_name("minus(other:)")));
- (GNKKotlinx_datetimeInstant *)plusDuration:(int64_t)duration __attribute__((swift_name("plus(duration:)")));
- (int64_t)toEpochMilliseconds __attribute__((swift_name("toEpochMilliseconds()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t epochSeconds __attribute__((swift_name("epochSeconds")));
@property (readonly) int32_t nanosecondsOfSecond __attribute__((swift_name("nanosecondsOfSecond")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface GNKKotlinEnumCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface GNKKotlinArray<T> : GNKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(GNKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<GNKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioCloseable")))
@protocol GNKKtor_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClient")))
@interface GNKKtor_client_coreHttpClient : GNKBase <GNKKotlinx_coroutines_coreCoroutineScope, GNKKtor_ioCloseable>
- (instancetype)initWithEngine:(id<GNKKtor_client_coreHttpClientEngine>)engine userConfig:(GNKKtor_client_coreHttpClientConfig<GNKKtor_client_coreHttpClientEngineConfig *> *)userConfig __attribute__((swift_name("init(engine:userConfig:)"))) __attribute__((objc_designated_initializer));
- (void)close __attribute__((swift_name("close()")));
- (GNKKtor_client_coreHttpClient *)configBlock:(void (^)(GNKKtor_client_coreHttpClientConfig<id> *))block __attribute__((swift_name("config(block:)")));
- (BOOL)isSupportedCapability:(id<GNKKtor_client_coreHttpClientEngineCapability>)capability __attribute__((swift_name("isSupported(capability:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) id<GNKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property (readonly) id<GNKKtor_client_coreHttpClientEngine> engine __attribute__((swift_name("engine")));
@property (readonly) GNKKtor_client_coreHttpClientEngineConfig *engineConfig __attribute__((swift_name("engineConfig")));
@property (readonly) GNKKtor_eventsEvents *monitor __attribute__((swift_name("monitor")));
@property (readonly) GNKKtor_client_coreHttpReceivePipeline *receivePipeline __attribute__((swift_name("receivePipeline")));
@property (readonly) GNKKtor_client_coreHttpRequestPipeline *requestPipeline __attribute__((swift_name("requestPipeline")));
@property (readonly) GNKKtor_client_coreHttpResponsePipeline *responsePipeline __attribute__((swift_name("responsePipeline")));
@property (readonly) GNKKtor_client_coreHttpSendPipeline *sendPipeline __attribute__((swift_name("sendPipeline")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinCoroutineContext")))
@protocol GNKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<GNKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<GNKKotlinCoroutineContextElement> _Nullable)getKey:(id<GNKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<GNKKotlinCoroutineContext>)minusKeyKey:(id<GNKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<GNKKotlinCoroutineContext>)plusContext:(id<GNKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol GNKKotlinx_serialization_coreEncoder
@required
- (id<GNKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<GNKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<GNKKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNull __attribute__((swift_name("encodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableValueSerializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol GNKKotlinx_serialization_coreSerialDescriptor
@required

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSArray<id<GNKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GNKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSArray<id<GNKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) GNKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol GNKKotlinx_serialization_coreDecoder
@required
- (id<GNKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<GNKKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (GNKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode")))
@interface GNKKtor_httpHttpStatusCode : GNKBase
- (instancetype)initWithValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("init(value:description:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpHttpStatusCodeCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_httpHttpStatusCode *)doCopyValue:(int32_t)value description:(NSString *)description __attribute__((swift_name("doCopy(value:description:)")));
- (GNKKtor_httpHttpStatusCode *)descriptionValue:(NSString *)value __attribute__((swift_name("description(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) int32_t value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol GNKKotlinx_serialization_coreSerialFormat
@required
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol GNKKotlinx_serialization_coreStringFormat <GNKKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface GNKKotlinx_serialization_jsonJson : GNKBase <GNKKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) GNKKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(GNKKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (GNKKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (GNKKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) GNKKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol GNKKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<GNKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(void (^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol GNKKtor_httpHeaders <GNKKtor_utilsStringValues>
@required
@end

__attribute__((swift_name("Ktor_client_coreHttpClientCall")))
@interface GNKKtor_client_coreHttpClientCall : GNKBase <GNKKotlinx_coroutines_coreCoroutineScope>
- (instancetype)initWithClient:(GNKKtor_client_coreHttpClient *)client requestData:(GNKKtor_client_coreHttpRequestData *)requestData responseData:(GNKKtor_client_coreHttpResponseData *)responseData __attribute__((swift_name("init(client:requestData:responseData:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithClient:(GNKKtor_client_coreHttpClient *)client __attribute__((swift_name("init(client:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpClientCallCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyInfo:(GNKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("body(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)bodyNullableInfo:(GNKKtor_utilsTypeInfo *)info completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("bodyNullable(info:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)getResponseContentWithCompletionHandler:(void (^)(id<GNKKtor_ioByteReadChannel> _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getResponseContent(completionHandler:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) BOOL allowDoubleReceive __attribute__((swift_name("allowDoubleReceive")));
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) GNKKtor_client_coreHttpClient *client __attribute__((swift_name("client")));
@property (readonly) id<GNKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@property id<GNKKtor_client_coreHttpRequest> request __attribute__((swift_name("request")));
@property GNKKtor_client_coreHttpResponse *response __attribute__((swift_name("response")));
@end

__attribute__((swift_name("Ktor_ioByteReadChannel")))
@protocol GNKKtor_ioByteReadChannel
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)awaitContentWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("awaitContent(completionHandler:)")));
- (BOOL)cancelCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)discardMax:(int64_t)max completionHandler:(void (^)(GNKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("discard(max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)peekToDestination:(GNKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max completionHandler:(void (^)(GNKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(GNKKtor_ioChunkBuffer *)dst completionHandler:(void (^)(GNKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(GNKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(GNKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler:)")));
- (int32_t)readAvailableMin:(int32_t)min block:(void (^)(GNKKtor_ioBuffer *))block __attribute__((swift_name("readAvailable(min:block:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(GNKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readAvailableDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(GNKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readAvailable(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readBooleanWithCompletionHandler:(void (^)(GNKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readBoolean(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readByteWithCompletionHandler:(void (^)(GNKByte * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readByte(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readDoubleWithCompletionHandler:(void (^)(GNKDouble * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readDouble(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFloatWithCompletionHandler:(void (^)(GNKFloat * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readFloat(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(GNKKtor_ioChunkBuffer *)dst n:(int32_t)n completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:n:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(GNKKotlinByteArray *)dst offset:(int32_t)offset length:(int32_t)length completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int32_t)offset length:(int32_t)length completionHandler_:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler_:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readFullyDst:(void *)dst offset:(int64_t)offset length:(int64_t)length completionHandler__:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readFully(dst:offset:length:completionHandler__:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readIntWithCompletionHandler:(void (^)(GNKInt * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readInt(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readLongWithCompletionHandler:(void (^)(GNKLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readLong(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readPacketSize:(int32_t)size completionHandler:(void (^)(GNKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readPacket(size:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readRemainingLimit:(int64_t)limit completionHandler:(void (^)(GNKKtor_ioByteReadPacket * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readRemaining(limit:completionHandler:)")));
- (void)readSessionConsumer:(void (^)(id<GNKKtor_ioReadSession>))consumer __attribute__((swift_name("readSession(consumer:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readShortWithCompletionHandler:(void (^)(GNKShort * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readShort(completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readSuspendableSessionConsumer:(id<GNKKotlinSuspendFunction1>)consumer completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("readSuspendableSession(consumer:completionHandler:)"))) __attribute__((deprecated("Use read { } instead.")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineLimit:(int32_t)limit completionHandler:(void (^)(NSString * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8Line(limit:completionHandler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)readUTF8LineToOut:(id<GNKKotlinAppendable>)out limit:(int32_t)limit completionHandler:(void (^)(GNKBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("readUTF8LineTo(out:limit:completionHandler:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@property (readonly) GNKKotlinThrowable * _Nullable closedCause __attribute__((swift_name("closedCause")));
@property (readonly) BOOL isClosedForRead __attribute__((swift_name("isClosedForRead")));
@property (readonly) BOOL isClosedForWrite __attribute__((swift_name("isClosedForWrite")));
@property (readonly) int64_t totalBytesRead __attribute__((swift_name("totalBytesRead")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate")))
@interface GNKKtor_utilsGMTDate : GNKBase <GNKKotlinComparable>
@property (class, readonly, getter=companion) GNKKtor_utilsGMTDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(GNKKtor_utilsGMTDate *)other __attribute__((swift_name("compareTo(other:)")));
- (GNKKtor_utilsGMTDate *)doCopySeconds:(int32_t)seconds minutes:(int32_t)minutes hours:(int32_t)hours dayOfWeek:(GNKKtor_utilsWeekDay *)dayOfWeek dayOfMonth:(int32_t)dayOfMonth dayOfYear:(int32_t)dayOfYear month:(GNKKtor_utilsMonth *)month year:(int32_t)year timestamp:(int64_t)timestamp __attribute__((swift_name("doCopy(seconds:minutes:hours:dayOfWeek:dayOfMonth:dayOfYear:month:year:timestamp:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) GNKKtor_utilsWeekDay *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hours __attribute__((swift_name("hours")));
@property (readonly) int32_t minutes __attribute__((swift_name("minutes")));
@property (readonly) GNKKtor_utilsMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t seconds __attribute__((swift_name("seconds")));
@property (readonly) int64_t timestamp __attribute__((swift_name("timestamp")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion")))
@interface GNKKtor_httpHttpProtocolVersion : GNKBase
- (instancetype)initWithName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("init(name:major:minor:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpHttpProtocolVersionCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_httpHttpProtocolVersion *)doCopyName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("doCopy(name:major:minor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t major __attribute__((swift_name("major")));
@property (readonly) int32_t minor __attribute__((swift_name("minor")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeInstant.Companion")))
@interface GNKKotlinx_datetimeInstantCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinx_datetimeInstantCompanion *shared __attribute__((swift_name("shared")));
- (GNKKotlinx_datetimeInstant *)fromEpochMillisecondsEpochMilliseconds:(int64_t)epochMilliseconds __attribute__((swift_name("fromEpochMilliseconds(epochMilliseconds:)")));
- (GNKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment:(int32_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment:)")));
- (GNKKotlinx_datetimeInstant *)fromEpochSecondsEpochSeconds:(int64_t)epochSeconds nanosecondAdjustment_:(int64_t)nanosecondAdjustment __attribute__((swift_name("fromEpochSeconds(epochSeconds:nanosecondAdjustment_:)")));
- (GNKKotlinx_datetimeInstant *)now __attribute__((swift_name("now()"))) __attribute__((unavailable("Use Clock.System.now() instead")));
- (GNKKotlinx_datetimeInstant *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@property (readonly) GNKKotlinx_datetimeInstant *DISTANT_FUTURE __attribute__((swift_name("DISTANT_FUTURE")));
@property (readonly) GNKKotlinx_datetimeInstant *DISTANT_PAST __attribute__((swift_name("DISTANT_PAST")));
@end

__attribute__((swift_name("KotlinIterator")))
@protocol GNKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol GNKKtor_client_coreHttpClientEngine <GNKKotlinx_coroutines_coreCoroutineScope, GNKKtor_ioCloseable>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeData:(GNKKtor_client_coreHttpRequestData *)data completionHandler:(void (^)(GNKKtor_client_coreHttpResponseData * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(data:completionHandler:)")));
- (void)installClient:(GNKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
@property (readonly) GNKKtor_client_coreHttpClientEngineConfig *config __attribute__((swift_name("config")));
@property (readonly) GNKKotlinx_coroutines_coreCoroutineDispatcher *dispatcher __attribute__((swift_name("dispatcher")));
@property (readonly) NSSet<id<GNKKtor_client_coreHttpClientEngineCapability>> *supportedCapabilities __attribute__((swift_name("supportedCapabilities")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface GNKKtor_client_coreHttpClientEngineConfig : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property BOOL pipelining __attribute__((swift_name("pipelining")));
@property GNKKtor_client_coreProxyConfig * _Nullable proxy __attribute__((swift_name("proxy")));
@property int32_t threadsCount __attribute__((swift_name("threadsCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientConfig")))
@interface GNKKtor_client_coreHttpClientConfig<T> : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GNKKtor_client_coreHttpClientConfig<T> *)clone __attribute__((swift_name("clone()")));
- (void)engineBlock:(void (^)(T))block __attribute__((swift_name("engine(block:)")));
- (void)installClient:(GNKKtor_client_coreHttpClient *)client __attribute__((swift_name("install(client:)")));
- (void)installPlugin:(id<GNKKtor_client_coreHttpClientPlugin>)plugin configure:(void (^)(id))configure __attribute__((swift_name("install(plugin:configure:)")));
- (void)installKey:(NSString *)key block:(void (^)(GNKKtor_client_coreHttpClient *))block __attribute__((swift_name("install(key:block:)")));
- (void)plusAssignOther:(GNKKtor_client_coreHttpClientConfig<T> *)other __attribute__((swift_name("plusAssign(other:)")));
@property BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property BOOL expectSuccess __attribute__((swift_name("expectSuccess")));
@property BOOL followRedirects __attribute__((swift_name("followRedirects")));
@property BOOL useDefaultTransformers __attribute__((swift_name("useDefaultTransformers")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientEngineCapability")))
@protocol GNKKtor_client_coreHttpClientEngineCapability
@required
@end

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol GNKKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(GNKKtor_utilsAttributeKey<id> *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(GNKKtor_utilsAttributeKey<id> *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<GNKKtor_utilsAttributeKey<id> *> *allKeys __attribute__((swift_name("allKeys")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_eventsEvents")))
@interface GNKKtor_eventsEvents : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)raiseDefinition:(GNKKtor_eventsEventDefinition<id> *)definition value:(id _Nullable)value __attribute__((swift_name("raise(definition:value:)")));
- (id<GNKKotlinx_coroutines_coreDisposableHandle>)subscribeDefinition:(GNKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("subscribe(definition:handler:)")));
- (void)unsubscribeDefinition:(GNKKtor_eventsEventDefinition<id> *)definition handler:(void (^)(id _Nullable))handler __attribute__((swift_name("unsubscribe(definition:handler:)")));
@end

__attribute__((swift_name("Ktor_utilsPipeline")))
@interface GNKKtor_utilsPipeline<TSubject, TContext> : GNKBase
- (instancetype)initWithPhase:(GNKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<GNKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhases:(GNKKotlinArray<GNKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer));
- (void)addPhasePhase:(GNKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("addPhase(phase:)")));
- (void)afterIntercepted __attribute__((swift_name("afterIntercepted()")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)executeContext:(TContext)context subject:(TSubject)subject completionHandler:(void (^)(TSubject _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("execute(context:subject:completionHandler:)")));
- (void)insertPhaseAfterReference:(GNKKtor_utilsPipelinePhase *)reference phase:(GNKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseAfter(reference:phase:)")));
- (void)insertPhaseBeforeReference:(GNKKtor_utilsPipelinePhase *)reference phase:(GNKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("insertPhaseBefore(reference:phase:)")));
- (void)interceptPhase:(GNKKtor_utilsPipelinePhase *)phase block:(id<GNKKotlinSuspendFunction2>)block __attribute__((swift_name("intercept(phase:block:)")));
- (NSArray<id<GNKKotlinSuspendFunction2>> *)interceptorsForPhasePhase:(GNKKtor_utilsPipelinePhase *)phase __attribute__((swift_name("interceptorsForPhase(phase:)")));
- (void)mergeFrom:(GNKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("merge(from:)")));
- (void)mergePhasesFrom:(GNKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("mergePhases(from:)")));
- (void)resetFromFrom:(GNKKtor_utilsPipeline<TSubject, TContext> *)from __attribute__((swift_name("resetFrom(from:)")));
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@property (readonly, getter=isEmpty_) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<GNKKtor_utilsPipelinePhase *> *items __attribute__((swift_name("items")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline")))
@interface GNKKtor_client_coreHttpReceivePipeline : GNKKtor_utilsPipeline<GNKKtor_client_coreHttpResponse *, GNKKotlinUnit *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(GNKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<GNKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(GNKKotlinArray<GNKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpReceivePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline")))
@interface GNKKtor_client_coreHttpRequestPipeline : GNKKtor_utilsPipeline<id, GNKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(GNKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<GNKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(GNKKotlinArray<GNKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpRequestPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline")))
@interface GNKKtor_client_coreHttpResponsePipeline : GNKKtor_utilsPipeline<GNKKtor_client_coreHttpResponseContainer *, GNKKtor_client_coreHttpClientCall *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(GNKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<GNKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(GNKKotlinArray<GNKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpResponsePipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline")))
@interface GNKKtor_client_coreHttpSendPipeline : GNKKtor_utilsPipeline<id, GNKKtor_client_coreHttpRequestBuilder *>
- (instancetype)initWithDevelopmentMode:(BOOL)developmentMode __attribute__((swift_name("init(developmentMode:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithPhase:(GNKKtor_utilsPipelinePhase *)phase interceptors:(NSArray<id<GNKKotlinSuspendFunction2>> *)interceptors __attribute__((swift_name("init(phase:interceptors:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithPhases:(GNKKotlinArray<GNKKtor_utilsPipelinePhase *> *)phases __attribute__((swift_name("init(phases:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpSendPipelinePhases *companion __attribute__((swift_name("companion")));
@property (readonly) BOOL developmentMode __attribute__((swift_name("developmentMode")));
@end

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol GNKKotlinCoroutineContextElement <GNKKotlinCoroutineContext>
@required
@property (readonly) id<GNKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol GNKKotlinCoroutineContextKey
@required
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol GNKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<GNKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)encodeNullableSerializableElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<GNKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface GNKKotlinx_serialization_coreSerializersModule : GNKBase

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)dumpToCollector:(id<GNKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GNKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<GNKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<GNKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GNKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GNKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id<GNKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<GNKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end

__attribute__((swift_name("KotlinAnnotation")))
@protocol GNKKotlinAnnotation
@required
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface GNKKotlinx_serialization_coreSerialKind : GNKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol GNKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<GNKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<GNKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<GNKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) GNKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface GNKKotlinNothing : GNKBase
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpStatusCode.Companion")))
@interface GNKKtor_httpHttpStatusCodeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpHttpStatusCodeCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_httpHttpStatusCode *)fromValueValue:(int32_t)value __attribute__((swift_name("fromValue(value:)")));
@property (readonly) GNKKtor_httpHttpStatusCode *Accepted __attribute__((swift_name("Accepted")));
@property (readonly) GNKKtor_httpHttpStatusCode *BadGateway __attribute__((swift_name("BadGateway")));
@property (readonly) GNKKtor_httpHttpStatusCode *BadRequest __attribute__((swift_name("BadRequest")));
@property (readonly) GNKKtor_httpHttpStatusCode *Conflict __attribute__((swift_name("Conflict")));
@property (readonly) GNKKtor_httpHttpStatusCode *Continue __attribute__((swift_name("Continue")));
@property (readonly) GNKKtor_httpHttpStatusCode *Created __attribute__((swift_name("Created")));
@property (readonly) GNKKtor_httpHttpStatusCode *ExpectationFailed __attribute__((swift_name("ExpectationFailed")));
@property (readonly) GNKKtor_httpHttpStatusCode *FailedDependency __attribute__((swift_name("FailedDependency")));
@property (readonly) GNKKtor_httpHttpStatusCode *Forbidden __attribute__((swift_name("Forbidden")));
@property (readonly) GNKKtor_httpHttpStatusCode *Found __attribute__((swift_name("Found")));
@property (readonly) GNKKtor_httpHttpStatusCode *GatewayTimeout __attribute__((swift_name("GatewayTimeout")));
@property (readonly) GNKKtor_httpHttpStatusCode *Gone __attribute__((swift_name("Gone")));
@property (readonly) GNKKtor_httpHttpStatusCode *InsufficientStorage __attribute__((swift_name("InsufficientStorage")));
@property (readonly) GNKKtor_httpHttpStatusCode *InternalServerError __attribute__((swift_name("InternalServerError")));
@property (readonly) GNKKtor_httpHttpStatusCode *LengthRequired __attribute__((swift_name("LengthRequired")));
@property (readonly) GNKKtor_httpHttpStatusCode *Locked __attribute__((swift_name("Locked")));
@property (readonly) GNKKtor_httpHttpStatusCode *MethodNotAllowed __attribute__((swift_name("MethodNotAllowed")));
@property (readonly) GNKKtor_httpHttpStatusCode *MovedPermanently __attribute__((swift_name("MovedPermanently")));
@property (readonly) GNKKtor_httpHttpStatusCode *MultiStatus __attribute__((swift_name("MultiStatus")));
@property (readonly) GNKKtor_httpHttpStatusCode *MultipleChoices __attribute__((swift_name("MultipleChoices")));
@property (readonly) GNKKtor_httpHttpStatusCode *NoContent __attribute__((swift_name("NoContent")));
@property (readonly) GNKKtor_httpHttpStatusCode *NonAuthoritativeInformation __attribute__((swift_name("NonAuthoritativeInformation")));
@property (readonly) GNKKtor_httpHttpStatusCode *NotAcceptable __attribute__((swift_name("NotAcceptable")));
@property (readonly) GNKKtor_httpHttpStatusCode *NotFound __attribute__((swift_name("NotFound")));
@property (readonly) GNKKtor_httpHttpStatusCode *NotImplemented __attribute__((swift_name("NotImplemented")));
@property (readonly) GNKKtor_httpHttpStatusCode *NotModified __attribute__((swift_name("NotModified")));
@property (readonly) GNKKtor_httpHttpStatusCode *OK __attribute__((swift_name("OK")));
@property (readonly) GNKKtor_httpHttpStatusCode *PartialContent __attribute__((swift_name("PartialContent")));
@property (readonly) GNKKtor_httpHttpStatusCode *PayloadTooLarge __attribute__((swift_name("PayloadTooLarge")));
@property (readonly) GNKKtor_httpHttpStatusCode *PaymentRequired __attribute__((swift_name("PaymentRequired")));
@property (readonly) GNKKtor_httpHttpStatusCode *PermanentRedirect __attribute__((swift_name("PermanentRedirect")));
@property (readonly) GNKKtor_httpHttpStatusCode *PreconditionFailed __attribute__((swift_name("PreconditionFailed")));
@property (readonly) GNKKtor_httpHttpStatusCode *Processing __attribute__((swift_name("Processing")));
@property (readonly) GNKKtor_httpHttpStatusCode *ProxyAuthenticationRequired __attribute__((swift_name("ProxyAuthenticationRequired")));
@property (readonly) GNKKtor_httpHttpStatusCode *RequestHeaderFieldTooLarge __attribute__((swift_name("RequestHeaderFieldTooLarge")));
@property (readonly) GNKKtor_httpHttpStatusCode *RequestTimeout __attribute__((swift_name("RequestTimeout")));
@property (readonly) GNKKtor_httpHttpStatusCode *RequestURITooLong __attribute__((swift_name("RequestURITooLong")));
@property (readonly) GNKKtor_httpHttpStatusCode *RequestedRangeNotSatisfiable __attribute__((swift_name("RequestedRangeNotSatisfiable")));
@property (readonly) GNKKtor_httpHttpStatusCode *ResetContent __attribute__((swift_name("ResetContent")));
@property (readonly) GNKKtor_httpHttpStatusCode *SeeOther __attribute__((swift_name("SeeOther")));
@property (readonly) GNKKtor_httpHttpStatusCode *ServiceUnavailable __attribute__((swift_name("ServiceUnavailable")));
@property (readonly) GNKKtor_httpHttpStatusCode *SwitchProxy __attribute__((swift_name("SwitchProxy")));
@property (readonly) GNKKtor_httpHttpStatusCode *SwitchingProtocols __attribute__((swift_name("SwitchingProtocols")));
@property (readonly) GNKKtor_httpHttpStatusCode *TemporaryRedirect __attribute__((swift_name("TemporaryRedirect")));
@property (readonly) GNKKtor_httpHttpStatusCode *TooManyRequests __attribute__((swift_name("TooManyRequests")));
@property (readonly) GNKKtor_httpHttpStatusCode *Unauthorized __attribute__((swift_name("Unauthorized")));
@property (readonly) GNKKtor_httpHttpStatusCode *UnprocessableEntity __attribute__((swift_name("UnprocessableEntity")));
@property (readonly) GNKKtor_httpHttpStatusCode *UnsupportedMediaType __attribute__((swift_name("UnsupportedMediaType")));
@property (readonly) GNKKtor_httpHttpStatusCode *UpgradeRequired __attribute__((swift_name("UpgradeRequired")));
@property (readonly) GNKKtor_httpHttpStatusCode *UseProxy __attribute__((swift_name("UseProxy")));
@property (readonly) GNKKtor_httpHttpStatusCode *VariantAlsoNegotiates __attribute__((swift_name("VariantAlsoNegotiates")));
@property (readonly) GNKKtor_httpHttpStatusCode *VersionNotSupported __attribute__((swift_name("VersionNotSupported")));
@property (readonly) NSArray<GNKKtor_httpHttpStatusCode *> *allStatusCodes __attribute__((swift_name("allStatusCodes")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface GNKKotlinx_serialization_jsonJsonDefault : GNKKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.Serializable(with=NormalClass(value=kotlinx/serialization/json/JsonElementSerializer))
*/
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface GNKKotlinx_serialization_jsonJsonElement : GNKBase
@property (class, readonly, getter=companion) GNKKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface GNKKotlinx_serialization_jsonJsonConfiguration : GNKBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end

__attribute__((swift_name("KotlinMapEntry")))
@protocol GNKKotlinMapEntry
@required
@property (readonly) id _Nullable key __attribute__((swift_name("key")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface GNKKtor_client_coreHttpRequestData : GNKBase
- (instancetype)initWithUrl:(GNKKtor_httpUrl *)url method:(GNKKtor_httpHttpMethod *)method headers:(id<GNKKtor_httpHeaders>)headers body:(GNKKtor_httpOutgoingContent *)body executionContext:(id<GNKKotlinx_coroutines_coreJob>)executionContext attributes:(id<GNKKtor_utilsAttributes>)attributes __attribute__((swift_name("init(url:method:headers:body:executionContext:attributes:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)getCapabilityOrNullKey:(id<GNKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) GNKKtor_httpOutgoingContent *body __attribute__((swift_name("body")));
@property (readonly) id<GNKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) id<GNKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) GNKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) GNKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseData")))
@interface GNKKtor_client_coreHttpResponseData : GNKBase
- (instancetype)initWithStatusCode:(GNKKtor_httpHttpStatusCode *)statusCode requestTime:(GNKKtor_utilsGMTDate *)requestTime headers:(id<GNKKtor_httpHeaders>)headers version:(GNKKtor_httpHttpProtocolVersion *)version body:(id)body callContext:(id<GNKKotlinCoroutineContext>)callContext __attribute__((swift_name("init(statusCode:requestTime:headers:version:body:callContext:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id body __attribute__((swift_name("body")));
@property (readonly) id<GNKKotlinCoroutineContext> callContext __attribute__((swift_name("callContext")));
@property (readonly) id<GNKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) GNKKtor_utilsGMTDate *requestTime __attribute__((swift_name("requestTime")));
@property (readonly) GNKKtor_utilsGMTDate *responseTime __attribute__((swift_name("responseTime")));
@property (readonly) GNKKtor_httpHttpStatusCode *statusCode __attribute__((swift_name("statusCode")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *version __attribute__((swift_name("version")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpClientCall.Companion")))
@interface GNKKtor_client_coreHttpClientCallCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpClientCallCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsAttributeKey<id> *CustomResponse __attribute__((swift_name("CustomResponse"))) __attribute__((unavailable("This is going to be removed. Please file a ticket with clarification why and what for do you need it.")));
@end

__attribute__((swift_name("KotlinIllegalStateException")))
@interface GNKKotlinIllegalStateException : GNKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.4")
*/
__attribute__((swift_name("KotlinCancellationException")))
@interface GNKKotlinCancellationException : GNKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(GNKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsTypeInfo")))
@interface GNKKtor_utilsTypeInfo : GNKBase
- (instancetype)initWithType:(id<GNKKotlinKClass>)type reifiedType:(id<GNKKotlinKType>)reifiedType kotlinType:(id<GNKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("init(type:reifiedType:kotlinType:)"))) __attribute__((objc_designated_initializer));
- (GNKKtor_utilsTypeInfo *)doCopyType:(id<GNKKotlinKClass>)type reifiedType:(id<GNKKotlinKType>)reifiedType kotlinType:(id<GNKKotlinKType> _Nullable)kotlinType __attribute__((swift_name("doCopy(type:reifiedType:kotlinType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<GNKKotlinKType> _Nullable kotlinType __attribute__((swift_name("kotlinType")));
@property (readonly) id<GNKKotlinKType> reifiedType __attribute__((swift_name("reifiedType")));
@property (readonly) id<GNKKotlinKClass> type __attribute__((swift_name("type")));
@end

__attribute__((swift_name("Ktor_client_coreHttpRequest")))
@protocol GNKKtor_client_coreHttpRequest <GNKKtor_httpHttpMessage, GNKKotlinx_coroutines_coreCoroutineScope>
@required
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property (readonly) GNKKtor_client_coreHttpClientCall *call __attribute__((swift_name("call")));
@property (readonly) GNKKtor_httpOutgoingContent *content __attribute__((swift_name("content")));
@property (readonly) GNKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) GNKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory")))
@interface GNKKtor_ioMemory : GNKBase
- (instancetype)initWithPointer:(void *)pointer size:(int64_t)size __attribute__((swift_name("init(pointer:size:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_ioMemoryCompanion *companion __attribute__((swift_name("companion")));
- (void)doCopyToDestination:(GNKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length destinationOffset:(int32_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset:)")));
- (void)doCopyToDestination:(GNKKtor_ioMemory *)destination offset:(int64_t)offset length:(int64_t)length destinationOffset_:(int64_t)destinationOffset __attribute__((swift_name("doCopyTo(destination:offset:length:destinationOffset_:)")));
- (int8_t)loadAtIndex:(int32_t)index __attribute__((swift_name("loadAt(index:)")));
- (int8_t)loadAtIndex_:(int64_t)index __attribute__((swift_name("loadAt(index_:)")));
- (GNKKtor_ioMemory *)sliceOffset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("slice(offset:length:)")));
- (GNKKtor_ioMemory *)sliceOffset:(int64_t)offset length_:(int64_t)length __attribute__((swift_name("slice(offset:length_:)")));
- (void)storeAtIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("storeAt(index:value:)")));
- (void)storeAtIndex:(int64_t)index value_:(int8_t)value __attribute__((swift_name("storeAt(index:value_:)")));
@property (readonly) void *pointer __attribute__((swift_name("pointer")));
@property (readonly) int64_t size __attribute__((swift_name("size")));
@property (readonly) int32_t size32 __attribute__((swift_name("size32")));
@end

__attribute__((swift_name("Ktor_ioBuffer")))
@interface GNKKtor_ioBuffer : GNKBase
- (instancetype)initWithMemory:(GNKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_ioBufferCompanion *companion __attribute__((swift_name("companion")));
- (void)commitWrittenCount:(int32_t)count __attribute__((swift_name("commitWritten(count:)")));
- (void)discardExactCount:(int32_t)count __attribute__((swift_name("discardExact(count:)")));
- (GNKKtor_ioBuffer *)duplicate __attribute__((swift_name("duplicate()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)duplicateToCopy:(GNKKtor_ioBuffer *)copy __attribute__((swift_name("duplicateTo(copy:)")));
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
@property (readonly) GNKKtor_ioMemory *memory __attribute__((swift_name("memory")));
@property (readonly) int32_t readPosition __attribute__((swift_name("readPosition")));
@property (readonly) int32_t readRemaining __attribute__((swift_name("readRemaining")));
@property (readonly) int32_t startGap __attribute__((swift_name("startGap")));
@property (readonly) int32_t writePosition __attribute__((swift_name("writePosition")));
@property (readonly) int32_t writeRemaining __attribute__((swift_name("writeRemaining")));
@end

__attribute__((swift_name("Ktor_ioChunkBuffer")))
@interface GNKKtor_ioChunkBuffer : GNKKtor_ioBuffer
- (instancetype)initWithMemory:(GNKKtor_ioMemory *)memory origin:(GNKKtor_ioChunkBuffer * _Nullable)origin parentPool:(id<GNKKtor_ioObjectPool> _Nullable)parentPool __attribute__((swift_name("init(memory:origin:parentPool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMemory:(GNKKtor_ioMemory *)memory __attribute__((swift_name("init(memory:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_ioChunkBufferCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_ioChunkBuffer * _Nullable)cleanNext __attribute__((swift_name("cleanNext()")));
- (GNKKtor_ioChunkBuffer *)duplicate __attribute__((swift_name("duplicate()")));
- (void)releasePool:(id<GNKKtor_ioObjectPool>)pool __attribute__((swift_name("release(pool:)")));
- (void)reset __attribute__((swift_name("reset()")));
@property (getter=next_) GNKKtor_ioChunkBuffer * _Nullable next __attribute__((swift_name("next")));
@property (readonly) GNKKtor_ioChunkBuffer * _Nullable origin __attribute__((swift_name("origin")));
@property (readonly) int32_t referenceCount __attribute__((swift_name("referenceCount")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface GNKKotlinByteArray : GNKBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(GNKByte *(^)(GNKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (GNKKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end

__attribute__((swift_name("Ktor_ioInput")))
@interface GNKKtor_ioInput : GNKBase <GNKKtor_ioCloseable>
- (instancetype)initWithHead:(GNKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<GNKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_ioInputCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)canRead __attribute__((swift_name("canRead()")));
- (void)close __attribute__((swift_name("close()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (int64_t)discardN_:(int64_t)n __attribute__((swift_name("discard(n_:)")));
- (void)discardExactN:(int32_t)n __attribute__((swift_name("discardExact(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(GNKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (BOOL)hasBytesN:(int32_t)n __attribute__((swift_name("hasBytes(n:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)markNoMoreChunksAvailable __attribute__((swift_name("markNoMoreChunksAvailable()")));
- (int64_t)peekToDestination:(GNKKtor_ioMemory *)destination destinationOffset:(int64_t)destinationOffset offset:(int64_t)offset min:(int64_t)min max:(int64_t)max __attribute__((swift_name("peekTo(destination:destinationOffset:offset:min:max:)")));
- (int32_t)peekToBuffer:(GNKKtor_ioChunkBuffer *)buffer __attribute__((swift_name("peekTo(buffer:)")));
- (int8_t)readByte __attribute__((swift_name("readByte()")));
- (NSString *)readTextMin:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(min:max:)")));
- (int32_t)readTextOut:(id<GNKKotlinAppendable>)out min:(int32_t)min max:(int32_t)max __attribute__((swift_name("readText(out:min:max:)")));
- (NSString *)readTextExactExactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(exactCharacters:)")));
- (void)readTextExactOut:(id<GNKKotlinAppendable>)out exactCharacters:(int32_t)exactCharacters __attribute__((swift_name("readTextExact(out:exactCharacters:)")));
- (void)release_ __attribute__((swift_name("release()")));
- (int32_t)tryPeek __attribute__((swift_name("tryPeek()")));
@property (readonly) BOOL endOfInput __attribute__((swift_name("endOfInput")));
@property (readonly) id<GNKKtor_ioObjectPool> pool __attribute__((swift_name("pool")));
@property (readonly) int64_t remaining __attribute__((swift_name("remaining")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket")))
@interface GNKKtor_ioByteReadPacket : GNKKtor_ioInput
- (instancetype)initWithHead:(GNKKtor_ioChunkBuffer *)head pool:(id<GNKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:pool:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithHead:(GNKKtor_ioChunkBuffer *)head remaining:(int64_t)remaining pool:(id<GNKKtor_ioObjectPool>)pool __attribute__((swift_name("init(head:remaining:pool:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_ioByteReadPacketCompanion *companion __attribute__((swift_name("companion")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)closeSource __attribute__((swift_name("closeSource()")));
- (GNKKtor_ioByteReadPacket *)doCopy __attribute__((swift_name("doCopy()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKtor_ioChunkBuffer * _Nullable)fill __attribute__((swift_name("fill()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (int32_t)fillDestination:(GNKKtor_ioMemory *)destination offset:(int32_t)offset length:(int32_t)length __attribute__((swift_name("fill(destination:offset:length:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((swift_name("Ktor_ioReadSession")))
@protocol GNKKtor_ioReadSession
@required
- (int32_t)discardN:(int32_t)n __attribute__((swift_name("discard(n:)")));
- (GNKKtor_ioChunkBuffer * _Nullable)requestAtLeast:(int32_t)atLeast __attribute__((swift_name("request(atLeast:)")));
@property (readonly) int32_t availableForRead __attribute__((swift_name("availableForRead")));
@end

__attribute__((swift_name("KotlinFunction")))
@protocol GNKKotlinFunction
@required
@end

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol GNKKotlinSuspendFunction1 <GNKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end

__attribute__((swift_name("KotlinAppendable")))
@protocol GNKKotlinAppendable
@required
- (id<GNKKotlinAppendable>)appendValue:(unichar)value __attribute__((swift_name("append(value:)")));
- (id<GNKKotlinAppendable>)appendValue_:(id _Nullable)value __attribute__((swift_name("append(value_:)")));
- (id<GNKKotlinAppendable>)appendValue:(id _Nullable)value startIndex:(int32_t)startIndex endIndex:(int32_t)endIndex __attribute__((swift_name("append(value:startIndex:endIndex:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsGMTDate.Companion")))
@interface GNKKtor_utilsGMTDateCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_utilsGMTDateCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsGMTDate *START __attribute__((swift_name("START")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay")))
@interface GNKKtor_utilsWeekDay : GNKKotlinEnum<GNKKtor_utilsWeekDay *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_utilsWeekDayCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKKtor_utilsWeekDay *monday __attribute__((swift_name("monday")));
@property (class, readonly) GNKKtor_utilsWeekDay *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) GNKKtor_utilsWeekDay *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) GNKKtor_utilsWeekDay *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) GNKKtor_utilsWeekDay *friday __attribute__((swift_name("friday")));
@property (class, readonly) GNKKtor_utilsWeekDay *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) GNKKtor_utilsWeekDay *sunday __attribute__((swift_name("sunday")));
+ (GNKKotlinArray<GNKKtor_utilsWeekDay *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth")))
@interface GNKKtor_utilsMonth : GNKKotlinEnum<GNKKtor_utilsMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_utilsMonthCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) GNKKtor_utilsMonth *january __attribute__((swift_name("january")));
@property (class, readonly) GNKKtor_utilsMonth *february __attribute__((swift_name("february")));
@property (class, readonly) GNKKtor_utilsMonth *march __attribute__((swift_name("march")));
@property (class, readonly) GNKKtor_utilsMonth *april __attribute__((swift_name("april")));
@property (class, readonly) GNKKtor_utilsMonth *may __attribute__((swift_name("may")));
@property (class, readonly) GNKKtor_utilsMonth *june __attribute__((swift_name("june")));
@property (class, readonly) GNKKtor_utilsMonth *july __attribute__((swift_name("july")));
@property (class, readonly) GNKKtor_utilsMonth *august __attribute__((swift_name("august")));
@property (class, readonly) GNKKtor_utilsMonth *september __attribute__((swift_name("september")));
@property (class, readonly) GNKKtor_utilsMonth *october __attribute__((swift_name("october")));
@property (class, readonly) GNKKtor_utilsMonth *november __attribute__((swift_name("november")));
@property (class, readonly) GNKKtor_utilsMonth *december __attribute__((swift_name("december")));
+ (GNKKotlinArray<GNKKtor_utilsMonth *> *)values __attribute__((swift_name("values()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpProtocolVersion.Companion")))
@interface GNKKtor_httpHttpProtocolVersionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpHttpProtocolVersionCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_httpHttpProtocolVersion *)fromValueName:(NSString *)name major:(int32_t)major minor:(int32_t)minor __attribute__((swift_name("fromValue(name:major:minor:)")));
- (GNKKtor_httpHttpProtocolVersion *)parseValue:(id)value __attribute__((swift_name("parse(value:)")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *HTTP_1_0 __attribute__((swift_name("HTTP_1_0")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *HTTP_1_1 __attribute__((swift_name("HTTP_1_1")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *HTTP_2_0 __attribute__((swift_name("HTTP_2_0")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *QUIC __attribute__((swift_name("QUIC")));
@property (readonly) GNKKtor_httpHttpProtocolVersion *SPDY_3 __attribute__((swift_name("SPDY_3")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface GNKKotlinAbstractCoroutineContextElement : GNKBase <GNKKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<GNKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<GNKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol GNKKotlinContinuationInterceptor <GNKKotlinCoroutineContextElement>
@required
- (id<GNKKotlinContinuation>)interceptContinuationContinuation:(id<GNKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<GNKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface GNKKotlinx_coroutines_coreCoroutineDispatcher : GNKKotlinAbstractCoroutineContextElement <GNKKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<GNKKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<GNKKotlinCoroutineContext>)context block:(id<GNKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<GNKKotlinCoroutineContext>)context block:(id<GNKKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<GNKKotlinContinuation>)interceptContinuationContinuation:(id<GNKKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<GNKKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));

/**
 * @note annotations
 *   kotlinx.coroutines.ExperimentalCoroutinesApi
*/
- (GNKKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (GNKKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(GNKKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<GNKKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreProxyConfig")))
@interface GNKKtor_client_coreProxyConfig : GNKBase
- (instancetype)initWithUrl:(GNKKtor_httpUrl *)url __attribute__((swift_name("init(url:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKtor_httpUrl *url __attribute__((swift_name("url")));
@end

__attribute__((swift_name("Ktor_client_coreHttpClientPlugin")))
@protocol GNKKtor_client_coreHttpClientPlugin
@required
- (void)installPlugin:(id)plugin scope:(GNKKtor_client_coreHttpClient *)scope __attribute__((swift_name("install(plugin:scope:)")));
- (id)prepareBlock:(void (^)(id))block __attribute__((swift_name("prepare(block:)")));
@property (readonly) GNKKtor_utilsAttributeKey<id> *key __attribute__((swift_name("key")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface GNKKtor_utilsAttributeKey<T> : GNKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("Ktor_eventsEventDefinition")))
@interface GNKKtor_eventsEventDefinition<T> : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreDisposableHandle")))
@protocol GNKKotlinx_coroutines_coreDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsPipelinePhase")))
@interface GNKKtor_utilsPipelinePhase : GNKBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((swift_name("KotlinSuspendFunction2")))
@protocol GNKKotlinSuspendFunction2 <GNKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 p2:(id _Nullable)p2 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:p2:completionHandler:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpReceivePipeline.Phases")))
@interface GNKKtor_client_coreHttpReceivePipelinePhases : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpReceivePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) GNKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) GNKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface GNKKotlinUnit : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestPipeline.Phases")))
@interface GNKKtor_client_coreHttpRequestPipelinePhases : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpRequestPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) GNKKtor_utilsPipelinePhase *Render __attribute__((swift_name("Render")));
@property (readonly) GNKKtor_utilsPipelinePhase *Send __attribute__((swift_name("Send")));
@property (readonly) GNKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) GNKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol GNKKtor_httpHttpMessageBuilder
@required
@property (readonly) GNKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface GNKKtor_client_coreHttpRequestBuilder : GNKBase <GNKKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) GNKKtor_client_coreHttpRequestBuilderCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (id _Nullable)getCapabilityOrNullKey:(id<GNKKtor_client_coreHttpClientEngineCapability>)key __attribute__((swift_name("getCapabilityOrNull(key:)")));
- (void)setAttributesBlock:(void (^)(id<GNKKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (void)setCapabilityKey:(id<GNKKtor_client_coreHttpClientEngineCapability>)key capability:(id)capability __attribute__((swift_name("setCapability(key:capability:)")));
- (GNKKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(GNKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (GNKKtor_client_coreHttpRequestBuilder *)takeFromWithExecutionContextBuilder:(GNKKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFromWithExecutionContext(builder:)")));
- (void)urlBlock:(void (^)(GNKKtor_httpURLBuilder *, GNKKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property (readonly) id<GNKKtor_utilsAttributes> attributes __attribute__((swift_name("attributes")));
@property id body __attribute__((swift_name("body")));
@property GNKKtor_utilsTypeInfo * _Nullable bodyType __attribute__((swift_name("bodyType")));
@property (readonly) id<GNKKotlinx_coroutines_coreJob> executionContext __attribute__((swift_name("executionContext")));
@property (readonly) GNKKtor_httpHeadersBuilder *headers __attribute__((swift_name("headers")));
@property GNKKtor_httpHttpMethod *method __attribute__((swift_name("method")));
@property (readonly) GNKKtor_httpURLBuilder *url __attribute__((swift_name("url")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponsePipeline.Phases")))
@interface GNKKtor_client_coreHttpResponsePipelinePhases : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpResponsePipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsPipelinePhase *After __attribute__((swift_name("After")));
@property (readonly) GNKKtor_utilsPipelinePhase *Parse __attribute__((swift_name("Parse")));
@property (readonly) GNKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) GNKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@property (readonly) GNKKtor_utilsPipelinePhase *Transform __attribute__((swift_name("Transform")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpResponseContainer")))
@interface GNKKtor_client_coreHttpResponseContainer : GNKBase
- (instancetype)initWithExpectedType:(GNKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("init(expectedType:response:)"))) __attribute__((objc_designated_initializer));
- (GNKKtor_client_coreHttpResponseContainer *)doCopyExpectedType:(GNKKtor_utilsTypeInfo *)expectedType response:(id)response __attribute__((swift_name("doCopy(expectedType:response:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKtor_utilsTypeInfo *expectedType __attribute__((swift_name("expectedType")));
@property (readonly) id response __attribute__((swift_name("response")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpSendPipeline.Phases")))
@interface GNKKtor_client_coreHttpSendPipelinePhases : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)phases __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpSendPipelinePhases *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_utilsPipelinePhase *Before __attribute__((swift_name("Before")));
@property (readonly) GNKKtor_utilsPipelinePhase *Engine __attribute__((swift_name("Engine")));
@property (readonly) GNKKtor_utilsPipelinePhase *Monitoring __attribute__((swift_name("Monitoring")));
@property (readonly) GNKKtor_utilsPipelinePhase *Receive __attribute__((swift_name("Receive")));
@property (readonly) GNKKtor_utilsPipelinePhase *State __attribute__((swift_name("State")));
@end


/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol GNKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<GNKKotlinKClass>)kClass provider:(id<GNKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<GNKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<GNKKotlinKClass>)kClass serializer:(id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<GNKKotlinKClass>)baseClass actualClass:(id<GNKKotlinKClass>)actualClass actualSerializer:(id<GNKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<GNKKotlinKClass>)baseClass defaultDeserializerProvider:(id<GNKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultDeserializerBaseClass:(id<GNKKotlinKClass>)baseClass defaultDeserializerProvider:(id<GNKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));

/**
 * @note annotations
 *   kotlinx.serialization.ExperimentalSerializationApi
*/
- (void)polymorphicDefaultSerializerBaseClass:(id<GNKKotlinKClass>)baseClass defaultSerializerProvider:(id<GNKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol GNKKotlinKDeclarationContainer
@required
@end

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol GNKKotlinKAnnotatedElement
@required
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((swift_name("KotlinKClassifier")))
@protocol GNKKotlinKClassifier
@required
@end

__attribute__((swift_name("KotlinKClass")))
@protocol GNKKotlinKClass <GNKKotlinKDeclarationContainer, GNKKotlinKAnnotatedElement, GNKKotlinKClassifier>
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface GNKKotlinx_serialization_jsonJsonElementCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<GNKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface GNKKtor_httpUrl : GNKBase
@property (class, readonly, getter=companion) GNKKtor_httpUrlCompanion *companion __attribute__((swift_name("companion")));
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
@property (readonly) id<GNKKtor_httpParameters> parameters __attribute__((swift_name("parameters")));
@property (readonly) NSString * _Nullable password __attribute__((swift_name("password")));
@property (readonly) NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property (readonly) int32_t port __attribute__((swift_name("port")));
@property (readonly) GNKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property (readonly) int32_t specifiedPort __attribute__((swift_name("specifiedPort")));
@property (readonly) BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property (readonly) NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface GNKKtor_httpHttpMethod : GNKBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpHttpMethodCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((swift_name("Ktor_httpOutgoingContent")))
@interface GNKKtor_httpOutgoingContent : GNKBase
- (id _Nullable)getPropertyKey:(GNKKtor_utilsAttributeKey<id> *)key __attribute__((swift_name("getProperty(key:)")));
- (void)setPropertyKey:(GNKKtor_utilsAttributeKey<id> *)key value:(id _Nullable)value __attribute__((swift_name("setProperty(key:value:)")));
- (id<GNKKtor_httpHeaders> _Nullable)trailers __attribute__((swift_name("trailers()")));
@property (readonly) GNKLong * _Nullable contentLength __attribute__((swift_name("contentLength")));
@property (readonly) GNKKtor_httpContentType * _Nullable contentType __attribute__((swift_name("contentType")));
@property (readonly) id<GNKKtor_httpHeaders> headers __attribute__((swift_name("headers")));
@property (readonly) GNKKtor_httpHttpStatusCode * _Nullable status __attribute__((swift_name("status")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreJob")))
@protocol GNKKotlinx_coroutines_coreJob <GNKKotlinCoroutineContextElement>
@required
- (id<GNKKotlinx_coroutines_coreChildHandle>)attachChildChild:(id<GNKKotlinx_coroutines_coreChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancelCause_:(GNKKotlinCancellationException * _Nullable)cause __attribute__((swift_name("cancel(cause_:)")));
- (GNKKotlinCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<GNKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(void (^)(GNKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<GNKKotlinx_coroutines_coreDisposableHandle>)invokeOnCompletionHandler:(void (^)(GNKKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)joinWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("join(completionHandler:)")));
- (id<GNKKotlinx_coroutines_coreJob>)plusOther_:(id<GNKKotlinx_coroutines_coreJob>)other __attribute__((swift_name("plus(other_:)"))) __attribute__((unavailable("Operator '+' on two Job objects is meaningless. Job is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The job to the right of `+` just replaces the job the left of `+`.")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<GNKKotlinSequence> children __attribute__((swift_name("children")));
@property (readonly) BOOL isActive __attribute__((swift_name("isActive")));
@property (readonly) BOOL isCancelled __attribute__((swift_name("isCancelled")));
@property (readonly) BOOL isCompleted __attribute__((swift_name("isCompleted")));
@property (readonly) id<GNKKotlinx_coroutines_coreSelectClause0> onJoin __attribute__((swift_name("onJoin")));
@end

__attribute__((swift_name("KotlinKType")))
@protocol GNKKotlinKType
@required

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) NSArray<GNKKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));

/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
@property (readonly) id<GNKKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioMemory.Companion")))
@interface GNKKtor_ioMemoryCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_ioMemoryCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_ioMemory *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioBuffer.Companion")))
@interface GNKKtor_ioBufferCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_ioBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_ioBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) int32_t ReservedSize __attribute__((swift_name("ReservedSize")));
@end

__attribute__((swift_name("Ktor_ioObjectPool")))
@protocol GNKKtor_ioObjectPool <GNKKtor_ioCloseable>
@required
- (id)borrow __attribute__((swift_name("borrow()")));
- (void)dispose __attribute__((swift_name("dispose()")));
- (void)recycleInstance:(id)instance __attribute__((swift_name("recycle(instance:)")));
@property (readonly) int32_t capacity __attribute__((swift_name("capacity")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioChunkBuffer.Companion")))
@interface GNKKtor_ioChunkBufferCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_ioChunkBufferCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_ioChunkBuffer *Empty __attribute__((swift_name("Empty")));
@property (readonly) id<GNKKtor_ioObjectPool> EmptyPool __attribute__((swift_name("EmptyPool")));
@property (readonly) id<GNKKtor_ioObjectPool> Pool __attribute__((swift_name("Pool")));
@end

__attribute__((swift_name("KotlinByteIterator")))
@interface GNKKotlinByteIterator : GNKBase <GNKKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (GNKByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioInput.Companion")))
@interface GNKKtor_ioInputCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_ioInputCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_ioByteReadPacket.Companion")))
@interface GNKKtor_ioByteReadPacketCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_ioByteReadPacketCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) GNKKtor_ioByteReadPacket *Empty __attribute__((swift_name("Empty")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsWeekDay.Companion")))
@interface GNKKtor_utilsWeekDayCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_utilsWeekDayCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_utilsWeekDay *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (GNKKtor_utilsWeekDay *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsMonth.Companion")))
@interface GNKKtor_utilsMonthCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_utilsMonthCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_utilsMonth *)fromOrdinal:(int32_t)ordinal __attribute__((swift_name("from(ordinal:)")));
- (GNKKtor_utilsMonth *)fromValue:(NSString *)value __attribute__((swift_name("from(value:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
*/
__attribute__((swift_name("KotlinContinuation")))
@protocol GNKKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<GNKKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.3")
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface GNKKotlinAbstractCoroutineContextKey<B, E> : GNKBase <GNKKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<GNKKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<GNKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end


/**
 * @note annotations
 *   kotlin.ExperimentalStdlibApi
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface GNKKotlinx_coroutines_coreCoroutineDispatcherKey : GNKKotlinAbstractCoroutineContextKey<id<GNKKotlinContinuationInterceptor>, GNKKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<GNKKotlinCoroutineContextKey>)baseKey safeCast:(id<GNKKotlinCoroutineContextElement> _Nullable (^)(id<GNKKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol GNKKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@protocol GNKKtor_utilsStringValuesBuilder
@required
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<GNKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<GNKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<GNKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<GNKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));
@end

__attribute__((swift_name("Ktor_utilsStringValuesBuilderImpl")))
@interface GNKKtor_utilsStringValuesBuilderImpl : GNKBase <GNKKtor_utilsStringValuesBuilder>
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<GNKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<GNKKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<GNKKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<GNKKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@property (readonly) BOOL caseInsensitiveName __attribute__((swift_name("caseInsensitiveName")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values __attribute__((swift_name("values")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface GNKKtor_httpHeadersBuilder : GNKKtor_utilsStringValuesBuilderImpl
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<GNKKtor_httpHeaders>)build __attribute__((swift_name("build()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateNameName:(NSString *)name __attribute__((swift_name("validateName(name:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)validateValueValue:(NSString *)value __attribute__((swift_name("validateValue(value:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder.Companion")))
@interface GNKKtor_client_coreHttpRequestBuilderCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_client_coreHttpRequestBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface GNKKtor_httpURLBuilder : GNKBase
- (instancetype)initWithProtocol:(GNKKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password pathSegments:(NSArray<NSString *> *)pathSegments parameters:(id<GNKKtor_httpParameters>)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:pathSegments:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpURLBuilderCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property NSString *encodedFragment __attribute__((swift_name("encodedFragment")));
@property id<GNKKtor_httpParametersBuilder> encodedParameters __attribute__((swift_name("encodedParameters")));
@property NSString * _Nullable encodedPassword __attribute__((swift_name("encodedPassword")));
@property NSArray<NSString *> *encodedPathSegments __attribute__((swift_name("encodedPathSegments")));
@property NSString * _Nullable encodedUser __attribute__((swift_name("encodedUser")));
@property NSString *fragment __attribute__((swift_name("fragment")));
@property NSString *host __attribute__((swift_name("host")));
@property (readonly) id<GNKKtor_httpParametersBuilder> parameters __attribute__((swift_name("parameters")));
@property NSString * _Nullable password __attribute__((swift_name("password")));
@property NSArray<NSString *> *pathSegments __attribute__((swift_name("pathSegments")));
@property int32_t port __attribute__((swift_name("port")));
@property GNKKtor_httpURLProtocol *protocol __attribute__((swift_name("protocol")));
@property BOOL trailingQuery __attribute__((swift_name("trailingQuery")));
@property NSString * _Nullable user __attribute__((swift_name("user")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl.Companion")))
@interface GNKKtor_httpUrlCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpUrlCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParameters")))
@protocol GNKKtor_httpParameters <GNKKtor_utilsStringValues>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface GNKKtor_httpURLProtocol : GNKBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpURLProtocolCompanion *companion __attribute__((swift_name("companion")));
- (GNKKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t defaultPort __attribute__((swift_name("defaultPort")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod.Companion")))
@interface GNKKtor_httpHttpMethodCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpHttpMethodCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_httpHttpMethod *)parseMethod:(NSString *)method __attribute__((swift_name("parse(method:)")));
@property (readonly) NSArray<GNKKtor_httpHttpMethod *> *DefaultMethods __attribute__((swift_name("DefaultMethods")));
@property (readonly) GNKKtor_httpHttpMethod *Delete __attribute__((swift_name("Delete")));
@property (readonly) GNKKtor_httpHttpMethod *Get __attribute__((swift_name("Get")));
@property (readonly) GNKKtor_httpHttpMethod *Head __attribute__((swift_name("Head")));
@property (readonly) GNKKtor_httpHttpMethod *Options __attribute__((swift_name("Options")));
@property (readonly) GNKKtor_httpHttpMethod *Patch __attribute__((swift_name("Patch")));
@property (readonly) GNKKtor_httpHttpMethod *Post __attribute__((swift_name("Post")));
@property (readonly) GNKKtor_httpHttpMethod *Put __attribute__((swift_name("Put")));
@end

__attribute__((swift_name("Ktor_httpHeaderValueWithParameters")))
@interface GNKKtor_httpHeaderValueWithParameters : GNKBase
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<GNKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKtor_httpHeaderValueWithParametersCompanion *companion __attribute__((swift_name("companion")));
- (NSString * _Nullable)parameterName:(NSString *)name __attribute__((swift_name("parameter(name:)")));
- (NSString *)description __attribute__((swift_name("description()")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) NSString *content __attribute__((swift_name("content")));
@property (readonly) NSArray<GNKKtor_httpHeaderValueParam *> *parameters __attribute__((swift_name("parameters")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType")))
@interface GNKKtor_httpContentType : GNKKtor_httpHeaderValueWithParameters
- (instancetype)initWithContentType:(NSString *)contentType contentSubtype:(NSString *)contentSubtype parameters:(NSArray<GNKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(contentType:contentSubtype:parameters:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithContent:(NSString *)content parameters:(NSArray<GNKKtor_httpHeaderValueParam *> *)parameters __attribute__((swift_name("init(content:parameters:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) GNKKtor_httpContentTypeCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)matchPattern:(GNKKtor_httpContentType *)pattern __attribute__((swift_name("match(pattern:)")));
- (BOOL)matchPattern_:(NSString *)pattern __attribute__((swift_name("match(pattern_:)")));
- (GNKKtor_httpContentType *)withParameterName:(NSString *)name value:(NSString *)value __attribute__((swift_name("withParameter(name:value:)")));
- (GNKKtor_httpContentType *)withoutParameters __attribute__((swift_name("withoutParameters()")));
@property (readonly) NSString *contentSubtype __attribute__((swift_name("contentSubtype")));
@property (readonly) NSString *contentType __attribute__((swift_name("contentType")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildHandle")))
@protocol GNKKotlinx_coroutines_coreChildHandle <GNKKotlinx_coroutines_coreDisposableHandle>
@required
- (BOOL)childCancelledCause:(GNKKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@property (readonly) id<GNKKotlinx_coroutines_coreJob> _Nullable parent __attribute__((swift_name("parent")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreChildJob")))
@protocol GNKKotlinx_coroutines_coreChildJob <GNKKotlinx_coroutines_coreJob>
@required
- (void)parentCancelledParentJob:(id<GNKKotlinx_coroutines_coreParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end

__attribute__((swift_name("KotlinSequence")))
@protocol GNKKotlinSequence
@required
- (id<GNKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectClause0")))
@protocol GNKKotlinx_coroutines_coreSelectClause0
@required
- (void)registerSelectClause0Select:(id<GNKKotlinx_coroutines_coreSelectInstance>)select block:(id<GNKKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface GNKKotlinKTypeProjection : GNKBase
- (instancetype)initWithVariance:(GNKKotlinKVariance * _Nullable)variance type:(id<GNKKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) GNKKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (GNKKotlinKTypeProjection *)doCopyVariance:(GNKKotlinKVariance * _Nullable)variance type:(id<GNKKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<GNKKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) GNKKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder.Companion")))
@interface GNKKtor_httpURLBuilderCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpURLBuilderCompanion *shared __attribute__((swift_name("shared")));
@end

__attribute__((swift_name("Ktor_httpParametersBuilder")))
@protocol GNKKtor_httpParametersBuilder <GNKKtor_utilsStringValuesBuilder>
@required
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol.Companion")))
@interface GNKKtor_httpURLProtocolCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpURLProtocolCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_httpURLProtocol *)createOrDefaultName:(NSString *)name __attribute__((swift_name("createOrDefault(name:)")));
@property (readonly) GNKKtor_httpURLProtocol *HTTP __attribute__((swift_name("HTTP")));
@property (readonly) GNKKtor_httpURLProtocol *HTTPS __attribute__((swift_name("HTTPS")));
@property (readonly) GNKKtor_httpURLProtocol *SOCKS __attribute__((swift_name("SOCKS")));
@property (readonly) GNKKtor_httpURLProtocol *WS __attribute__((swift_name("WS")));
@property (readonly) GNKKtor_httpURLProtocol *WSS __attribute__((swift_name("WSS")));
@property (readonly) NSDictionary<NSString *, GNKKtor_httpURLProtocol *> *byName __attribute__((swift_name("byName")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueParam")))
@interface GNKKtor_httpHeaderValueParam : GNKBase
- (instancetype)initWithName:(NSString *)name value:(NSString *)value __attribute__((swift_name("init(name:value:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("init(name:value:escapeValue:)"))) __attribute__((objc_designated_initializer));
- (GNKKtor_httpHeaderValueParam *)doCopyName:(NSString *)name value:(NSString *)value escapeValue:(BOOL)escapeValue __attribute__((swift_name("doCopy(name:value:escapeValue:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL escapeValue __attribute__((swift_name("escapeValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeaderValueWithParameters.Companion")))
@interface GNKKtor_httpHeaderValueWithParametersCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpHeaderValueWithParametersCompanion *shared __attribute__((swift_name("shared")));
- (id _Nullable)parseValue:(NSString *)value init:(id _Nullable (^)(NSString *, NSArray<GNKKtor_httpHeaderValueParam *> *))init __attribute__((swift_name("parse(value:init:)")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpContentType.Companion")))
@interface GNKKtor_httpContentTypeCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKtor_httpContentTypeCompanion *shared __attribute__((swift_name("shared")));
- (GNKKtor_httpContentType *)parseValue:(NSString *)value __attribute__((swift_name("parse(value:)")));
@property (readonly) GNKKtor_httpContentType *Any __attribute__((swift_name("Any")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreParentJob")))
@protocol GNKKotlinx_coroutines_coreParentJob <GNKKotlinx_coroutines_coreJob>
@required
- (GNKKotlinCancellationException *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreSelectInstance")))
@protocol GNKKotlinx_coroutines_coreSelectInstance
@required
- (void)disposeOnSelectHandle:(id<GNKKotlinx_coroutines_coreDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicTrySelectDesc:(GNKKotlinx_coroutines_coreAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectWithExceptionException:(GNKKotlinThrowable *)exception __attribute__((swift_name("resumeSelectWithException(exception:)")));
- (BOOL)trySelect __attribute__((swift_name("trySelect()")));
- (id _Nullable)trySelectOtherOtherOp:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp * _Nullable)otherOp __attribute__((swift_name("trySelectOther(otherOp:)")));
@property (readonly) id<GNKKotlinContinuation> completion __attribute__((swift_name("completion")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@end

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol GNKKotlinSuspendFunction0 <GNKKotlinFunction>
@required

/**
 * @note This method converts instances of CancellationException to errors.
 * Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(completionHandler:)")));
@end


/**
 * @note annotations
 *   kotlin.SinceKotlin(version="1.1")
*/
__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface GNKKotlinKVariance : GNKKotlinEnum<GNKKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) GNKKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) GNKKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) GNKKotlinKVariance *out __attribute__((swift_name("out")));
+ (GNKKotlinArray<GNKKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@property (class, readonly) NSArray<GNKKotlinKVariance *> *entries __attribute__((swift_name("entries")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface GNKKotlinKTypeProjectionCompanion : GNKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) GNKKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GNKKotlinKTypeProjection *)contravariantType:(id<GNKKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GNKKotlinKTypeProjection *)covariantType:(id<GNKKotlinKType>)type __attribute__((swift_name("covariant(type:)")));

/**
 * @note annotations
 *   kotlin.jvm.JvmStatic
*/
- (GNKKotlinKTypeProjection *)invariantType:(id<GNKKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) GNKKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicDesc")))
@interface GNKKotlinx_coroutines_coreAtomicDesc : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(GNKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(GNKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));
@property GNKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreOpDescriptor")))
@interface GNKKotlinx_coroutines_coreOpDescriptor : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (BOOL)isEarlierThanThat:(GNKKotlinx_coroutines_coreOpDescriptor *)that __attribute__((swift_name("isEarlierThan(that:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKotlinx_coroutines_coreAtomicOp<id> * _Nullable atomicOp __attribute__((swift_name("atomicOp")));
@end

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.PrepareOp")))
@interface GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp : GNKKotlinx_coroutines_coreOpDescriptor
- (instancetype)initWithAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next desc:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *)desc __attribute__((swift_name("init(affected:next:desc:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)finishPrepare __attribute__((swift_name("finishPrepare()")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *affected __attribute__((swift_name("affected")));
@property (readonly) GNKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc *desc __attribute__((swift_name("desc")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *next __attribute__((swift_name("next")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreAtomicOp")))
@interface GNKKotlinx_coroutines_coreAtomicOp<__contravariant T> : GNKKotlinx_coroutines_coreOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(T _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)decideDecision:(id _Nullable)decision __attribute__((swift_name("decide(decision:)")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
- (id _Nullable)prepareAffected:(T _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
@property (readonly) GNKKotlinx_coroutines_coreAtomicOp<id> *atomicOp __attribute__((swift_name("atomicOp")));
@property (readonly) id _Nullable consensus __attribute__((swift_name("consensus")));
@property (readonly) BOOL isDecided __attribute__((swift_name("isDecided")));
@property (readonly) int64_t opSequence __attribute__((swift_name("opSequence")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode")))
@interface GNKKotlinx_coroutines_coreLockFreeLinkedListNode : GNKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)addLastNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addLast(node:)")));
- (BOOL)addLastIfNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node condition:(GNKBoolean *(^)(void))condition __attribute__((swift_name("addLastIf(node:condition:)")));
- (BOOL)addLastIfPrevNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(GNKBoolean *(^)(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate __attribute__((swift_name("addLastIfPrev(node:predicate:)")));
- (BOOL)addLastIfPrevAndIfNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node predicate:(GNKBoolean *(^)(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *))predicate condition:(GNKBoolean *(^)(void))condition __attribute__((swift_name("addLastIfPrevAndIf(node:predicate:condition:)")));
- (BOOL)addOneIfEmptyNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("addOneIfEmpty(node:)")));
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<GNKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeAddLastNode:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)node __attribute__((swift_name("describeAddLast(node:)")));
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<GNKKotlinx_coroutines_coreLockFreeLinkedListNode *> *)describeRemoveFirst __attribute__((swift_name("describeRemoveFirst()")));
- (void)helpRemove __attribute__((swift_name("helpRemove()")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)nextIfRemoved __attribute__((swift_name("nextIfRemoved()")));
- (BOOL)remove __attribute__((swift_name("remove()")));
- (id _Nullable)removeFirstIfIsInstanceOfOrPeekIfPredicate:(GNKBoolean *(^)(id _Nullable))predicate __attribute__((swift_name("removeFirstIfIsInstanceOfOrPeekIf(predicate:)")));
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)removeFirstOrNull __attribute__((swift_name("removeFirstOrNull()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL isRemoved __attribute__((swift_name("isRemoved")));
@property (readonly, getter=next_) id next __attribute__((swift_name("next")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *nextNode __attribute__((swift_name("nextNode")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *prevNode __attribute__((swift_name("prevNode")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNode.AbstractAtomicDesc")))
@interface GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc : GNKKotlinx_coroutines_coreAtomicDesc
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(GNKKotlinx_coroutines_coreAtomicOp<id> *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));
- (id _Nullable)onPreparePrepareOp:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("onPrepare(prepareOp:)")));
- (void)onRemovedAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("onRemoved(affected:)")));
- (id _Nullable)prepareOp:(GNKKotlinx_coroutines_coreAtomicOp<id> *)op __attribute__((swift_name("prepare(op:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(GNKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc")))
@interface GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAddLastDesc<T> : GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue node:(T)node __attribute__((swift_name("init(queue:node:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(GNKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));
@property (readonly) T node __attribute__((swift_name("node")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *originalNext __attribute__((swift_name("originalNext")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@end

__attribute__((swift_name("Kotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc")))
@interface GNKKotlinx_coroutines_coreLockFreeLinkedListNodeRemoveFirstDesc<T> : GNKKotlinx_coroutines_coreLockFreeLinkedListNodeAbstractAtomicDesc
- (instancetype)initWithQueue:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)queue __attribute__((swift_name("init(queue:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (id _Nullable)failureAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected __attribute__((swift_name("failure(affected:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (void)finishOnSuccessAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("finishOnSuccess(affected:next:)")));
- (void)finishPreparePrepareOp:(GNKKotlinx_coroutines_coreLockFreeLinkedListNodePrepareOp *)prepareOp __attribute__((swift_name("finishPrepare(prepareOp:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (BOOL)retryAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(id)next __attribute__((swift_name("retry(affected:next:)")));

/**
 * @note This method has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
- (GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable)takeAffectedNodeOp:(GNKKotlinx_coroutines_coreOpDescriptor *)op __attribute__((swift_name("takeAffectedNode(op:)")));
- (id)updatedNextAffected:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)affected next:(GNKKotlinx_coroutines_coreLockFreeLinkedListNode *)next __attribute__((swift_name("updatedNext(affected:next:)")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable affectedNode __attribute__((swift_name("affectedNode")));

/**
 * @note This property has protected visibility in Kotlin source and is intended only for use by subclasses.
*/
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode * _Nullable originalNext __attribute__((swift_name("originalNext")));
@property (readonly) GNKKotlinx_coroutines_coreLockFreeLinkedListNode *queue __attribute__((swift_name("queue")));
@property (readonly) T _Nullable result __attribute__((swift_name("result")));
@end

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
