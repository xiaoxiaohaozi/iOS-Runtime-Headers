/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@class NSData, NSObject<OS_dispatch_queue>;

@interface PKImage : NSObject <NSSecureCoding> {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _shouldTile;
    BOOL _shouldStretch;
    struct PKEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _capInsets;
    NSData *_imageData;
    struct CGImage { } *_imageRef;
    float _scale;
    int _orientation;
}

@property(readonly) NSData * imageData;
@property(readonly) struct CGImage { }* imageRef;
@property(readonly) struct CGSize { float x1; float x2; } size;
@property(readonly) int orientation;
@property(readonly) float scale;
@property(readonly) BOOL tiles;
@property(readonly) BOOL stretches;
@property(readonly) struct PKEdgeInsets { float x1; float x2; float x3; float x4; } capInsets;

+ (id)imageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)passesImageNamed:(id)arg1;
+ (id)hashOfImageNamed:(id)arg1 inBundle:(id)arg2;
+ (id)URLForImageNamed:(id)arg1 inBundle:(id)arg2 scale:(float*)arg3;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)initWithData:(id)arg1 scale:(float)arg2;
- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initWithCGImage:(struct CGImage { }*)arg1 scale:(float)arg2 orientation:(int)arg3;
- (struct PKEdgeInsets { float x1; float x2; float x3; float x4; })capInsets;
- (float)scale;
- (int)orientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGSize { float x1; float x2; })size;
- (id)notificationIconData;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (id)resizableImageByTilingCenterPixel;
- (id)resizableImageByStretchingWithCapInsets:(struct PKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (id)blurredImageWithRadius:(unsigned int)arg1 constraints:(id)arg2;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 withBlendMode:(int)arg3 alpha:(float)arg4;
- (id)resizableImageByTilingWithCapInsets:(struct PKEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)_queue_createImageRefIfNecessary;
- (void)preheatBitmapData;
- (id)resizedImageWithConstraints:(id)arg1;
- (BOOL)stretches;
- (BOOL)tiles;

@end