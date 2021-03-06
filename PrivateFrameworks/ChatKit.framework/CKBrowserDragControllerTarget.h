/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKBrowserDragControllerTarget : NSObject {
    unsigned int  _associatedLayoutIntent;
    struct CGSize { 
        float width; 
        float height; 
    }  _initialSize;
    float  _meshScaleFactor;
    float  _rotation;
    float  _scale;
    struct CGPoint { 
        float x; 
        float y; 
    }  _screenCoordiante;
}

@property (nonatomic) unsigned int associatedLayoutIntent;
@property (nonatomic) struct CGSize { float x1; float x2; } initialSize;
@property (nonatomic) float meshScaleFactor;
@property (nonatomic) float rotation;
@property (nonatomic) float scale;
@property (nonatomic) struct CGPoint { float x1; float x2; } screenCoordiante;

+ (id)targetWithScreenCoordiante:(struct CGPoint { float x1; float x2; })arg1 initialSize:(struct CGSize { float x1; float x2; })arg2 scale:(float)arg3 meshScaleFactor:(float)arg4 rotation:(float)arg5 associatedLayoutIntent:(unsigned int)arg6;

- (unsigned int)associatedLayoutIntent;
- (id)description;
- (struct CGSize { float x1; float x2; })initialSize;
- (float)meshScaleFactor;
- (float)rotation;
- (float)scale;
- (struct CGPoint { float x1; float x2; })screenCoordiante;
- (void)setAssociatedLayoutIntent:(unsigned int)arg1;
- (void)setInitialSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setMeshScaleFactor:(float)arg1;
- (void)setRotation:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setScreenCoordiante:(struct CGPoint { float x1; float x2; })arg1;

@end
