/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic, retain) NSNumber *angleValue;
@property (nonatomic) unsigned int blueComponent;
@property (nonatomic, retain) NSNumber *colorValue;
@property (nonatomic, retain) TDEffectComponent *component;
@property (nonatomic, retain) NSNumber *floatValue;
@property (nonatomic) unsigned int greenComponent;
@property (nonatomic, retain) NSNumber *intValue;
@property (nonatomic, retain) TDEffectParameterType *parameterType;
@property (nonatomic) unsigned int redComponent;

+ (id)keyPathsForValuesAffectingBlueComponent;
+ (id)keyPathsForValuesAffectingColor;
+ (id)keyPathsForValuesAffectingGreenComponent;
+ (id)keyPathsForValuesAffectingRedComponent;

- (unsigned int)blueComponent;
- (unsigned int)greenComponent;
- (unsigned int)redComponent;
- (void)setBlueComponent:(unsigned int)arg1;
- (void)setGreenComponent:(unsigned int)arg1;
- (void)setRedComponent:(unsigned int)arg1;

@end
