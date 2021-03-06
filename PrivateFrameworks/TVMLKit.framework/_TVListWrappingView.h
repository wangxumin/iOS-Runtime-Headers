/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVListWrappingView : UIView {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _cachedHeaderMargin;
    struct CGSize { 
        float width; 
        float height; 
    }  _cachedHeaderSize;
    BOOL  _computationValid;
    BOOL  _floatingHeader;
    BOOL  _headerCanBecomeFocused;
    BOOL  _headerFocused;
    UIView * _headerView;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    }  _listContentInset;
    UICollectionView * _listView;
}

@property (nonatomic) BOOL floatingHeader;
@property (nonatomic) BOOL headerCanBecomeFocused;
@property (getter=isHeaderFocused, nonatomic) BOOL headerFocused;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) struct UIEdgeInsets { float x1; float x2; float x3; float x4; } listContentInset;
@property (nonatomic, retain) UICollectionView *listView;

+ (float)_heightThatFitsList:(id)arg1 contentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg2;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_listContentInsetForSize:(struct CGSize { float x1; float x2; })arg1;
- (void)adjustScrollForContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)didUpdateFocusFromView:(id)arg1;
- (BOOL)floatingHeader;
- (BOOL)headerCanBecomeFocused;
- (id)headerView;
- (BOOL)isHeaderFocused;
- (void)layoutSubviews;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })listContentInset;
- (id)listView;
- (id)preferredFocusEnvironments;
- (void)setFloatingHeader:(BOOL)arg1;
- (void)setHeaderCanBecomeFocused:(BOOL)arg1;
- (void)setHeaderFocused:(BOOL)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setListContentInset:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setListView:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end
