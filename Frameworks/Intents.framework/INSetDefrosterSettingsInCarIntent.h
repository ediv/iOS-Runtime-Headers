/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INSetDefrosterSettingsInCarIntent : INIntent <INSetDefrosterSettingsInCarIntentExport>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) int defroster;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSNumber *enable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (id)_dictionaryRepresentation;
- (id)_metadata;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned int)arg1;
- (id)_typedBackingStore;
- (int)defroster;
- (id)description;
- (id)domain;
- (id)enable;
- (id)initWithEnable:(id)arg1 defroster:(int)arg2;
- (id)parametersByName;
- (void)setDefroster:(int)arg1;
- (void)setDomain:(id)arg1;
- (void)setEnable:(id)arg1;
- (void)setParametersByName:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)verb;

@end
