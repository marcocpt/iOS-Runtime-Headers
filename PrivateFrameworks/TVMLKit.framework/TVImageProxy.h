/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface TVImageProxy : NSObject <NSCopying> {
    BOOL  _cacheOnLoad;
    id /* block */  _completionHandler;
    TVImageDecorator * _decorator;
    _TVDecoratorRequest * _decoratorRequestToken;
    int  _groupType;
    BOOL  _imageAvailable;
    id  _imageDidWriteObserver;
    id  _imageLoader;
    BOOL  _isLoading;
    BOOL  _loadSynchronouslyIfCached;
    id  _object;
    id  _requestToken;
    id /* block */  _writeCompletionHandler;
    BOOL  _writeToAssetLibrary;
}

@property (nonatomic) BOOL cacheOnLoad;
@property (copy) id /* block */ completionHandler;
@property (nonatomic, retain) TVImageDecorator *decorator;
@property (nonatomic, retain) _TVDecoratorRequest *decoratorRequestToken;
@property (nonatomic, readonly) struct CGSize { float x1; float x2; } expectedSize;
@property (nonatomic) int groupType;
@property (getter=isImageAvailable, nonatomic) BOOL imageAvailable;
@property (nonatomic, retain) id imageDidWriteObserver;
@property (nonatomic, retain) id imageLoader;
@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL loadSynchronouslyIfCached;
@property (nonatomic, readonly) id object;
@property (nonatomic, retain) id requestToken;
@property (copy) id /* block */ writeCompletionHandler;
@property (nonatomic) BOOL writeToAssetLibrary;

+ (id)_imageDecoratorQueue;

- (void).cxx_destruct;
- (id)_assetKeyWithImageLoaderKey:(id)arg1 decoratorIdentifier:(id)arg2;
- (void)_callCompletionHandlerWithImage:(id)arg1 error:(id)arg2 finished:(BOOL)arg3;
- (void)_callWriteCompletionHandlerWithPath:(id)arg1 error:(id)arg2 finished:(BOOL)arg3;
- (void)_completeImageLoadWithImage:(id)arg1 imagePath:(id)arg2 error:(id)arg3 assetKey:(id)arg4 expiryDate:(id)arg5;
- (void)_decorateAndWriteImage:(id)arg1 imagePath:(id)arg2 scaleToSize:(struct CGSize { float x1; float x2; })arg3 cropToFit:(BOOL)arg4 scalingResult:(unsigned int)arg5 assetKey:(id)arg6 expiryDate:(id)arg7;
- (id)_decoratedImageAssetKey;
- (id)_decoratedImageAssetPath;
- (id)_decoratorIdentifier;
- (id)_imageAssetPathWithAssetKey:(id)arg1;
- (void)_imageDidWriteHandler:(id)arg1;
- (id)_imageLoaderKey;
- (id)_originalImageAssetKey;
- (id)_originalImageAssetPath;
- (BOOL)cacheOnLoad;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)decorator;
- (id)decoratorRequestToken;
- (id)description;
- (struct CGSize { float x1; float x2; })expectedSize;
- (int)groupType;
- (unsigned int)hash;
- (id)imageDidWriteObserver;
- (id)imageLoader;
- (id)initWithObject:(id)arg1 imageLoader:(id)arg2 groupType:(int)arg3;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isImageAvailable;
- (BOOL)isLoading;
- (void)load;
- (BOOL)loadSynchronouslyIfCached;
- (void)loadWithWeakObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)object;
- (id)requestToken;
- (void)setCacheOnLoad:(BOOL)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDecorator:(id)arg1;
- (void)setDecoratorRequestToken:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setImageAvailable:(BOOL)arg1;
- (void)setImageDidWriteObserver:(id)arg1;
- (void)setImageLoader:(id)arg1;
- (void)setIsLoading:(BOOL)arg1;
- (void)setLoadSynchronouslyIfCached:(BOOL)arg1;
- (void)setRequestToken:(id)arg1;
- (void)setWriteCompletionHandler:(id /* block */)arg1;
- (void)setWriteToAssetLibrary:(BOOL)arg1;
- (id /* block */)writeCompletionHandler;
- (BOOL)writeToAssetLibrary;

@end