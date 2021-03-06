/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKUIEventInviteesViewController : UITableViewController <EKEditItemViewControllerDelegate, EKEditItemViewControllerProtocol, UITableViewDataSource, UITableViewDelegate> {
    EKUIInviteesViewAddInviteesSection * _addInviteesSection;
    EKUIInviteesViewAllInviteesCanAttendSection * _allInviteesCanAttendSection;
    EKInviteeAlternativeTimeSearcher * _availabilitySearcher;
    BOOL  _deletedParticipants;
    EKEvent * _event;
    BOOL  _fromDetail;
    EKUIInviteesViewInvisibleInviteeStatusSection * _invisibleInviteeStatusSection;
    EKUIEventInviteesView * _inviteesView;
    EKUIInviteesViewNotRespondedInviteesSection * _notRespondedSection;
    EKUIInviteesViewOriginalConflictSection * _originalConflictSection;
    EKUIEventInviteesEditViewController * _parentController;
    EKUIInviteesViewProposedTimeSection * _proposedTimeSection;
    BOOL  _resetAttendeesSections;
    BOOL  _resetConflictResolutionSections;
    EKUIInviteesViewRespondedInviteesSection * _respondedSection;
    NSArray * _sections;
    NSDate * _selectedEndDate;
    NSDate * _selectedStartDate;
    EKUIInviteesViewSomeInviteesCanAttendSection * _someInviteesCanAttendSection;
    BOOL  _viewIsVisible;
}

@property (nonatomic, retain) EKUIInviteesViewAddInviteesSection *addInviteesSection;
@property (nonatomic, retain) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection;
@property (nonatomic, retain) EKInviteeAlternativeTimeSearcher *availabilitySearcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deletedParticipants;
@property (readonly, copy) NSString *description;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) BOOL fromDetail;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection;
@property (nonatomic, retain) EKUIEventInviteesView *inviteesView;
@property (nonatomic, retain) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection;
@property (nonatomic, retain) EKUIInviteesViewOriginalConflictSection *originalConflictSection;
@property (nonatomic) EKUIEventInviteesEditViewController *parentController;
@property (nonatomic) BOOL presentModally;
@property (nonatomic, retain) EKUIInviteesViewProposedTimeSection *proposedTimeSection;
@property (nonatomic) BOOL resetAttendeesSections;
@property (nonatomic) BOOL resetConflictResolutionSections;
@property (nonatomic, retain) EKUIInviteesViewRespondedInviteesSection *respondedSection;
@property (nonatomic, retain) NSArray *sections;
@property (nonatomic, retain) NSDate *selectedEndDate;
@property (nonatomic, retain) NSDate *selectedStartDate;
@property (nonatomic, retain) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection;
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomBackButton;
@property (nonatomic) BOOL viewIsVisible;

+ (id)_participantsInArray:(id)arg1 thatAreNotInArray:(id)arg2;

- (void).cxx_destruct;
- (id)_attendeesWithoutOrganizerAndLocations;
- (void)_dismiss:(id)arg1;
- (void)_dismissPresentedViewControllerAnimated:(BOOL)arg1;
- (void)_eventModified:(id)arg1;
- (void)_fontSizeDefinitionsChanged:(id)arg1;
- (int)_indexForSection:(id)arg1;
- (void)_presentViewController:(id)arg1;
- (void)_refreshIfNeeded;
- (void)_requestDismissal;
- (void)_searcherStateChanged:(int)arg1;
- (id)_sectionForIndex:(unsigned int)arg1;
- (void)_sendMessageToParticipants:(id)arg1;
- (id)_viewControllerForPresentingViewControllers;
- (id)addInviteesSection;
- (id)allInviteesCanAttendSection;
- (id)availabilitySearcher;
- (void)dealloc;
- (BOOL)deletedParticipants;
- (void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2;
- (BOOL)editItemViewControllerShouldShowDetachAlert;
- (id)event;
- (BOOL)fromDetail;
- (id)initWithEvent:(id)arg1 fromDetail:(BOOL)arg2;
- (id)invisibleInviteeStatusSection;
- (id)inviteesView;
- (void)loadView;
- (id)notRespondedSection;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)originalConflictSection;
- (id)parentController;
- (id)proposedTimeSection;
- (BOOL)resetAttendeesSections;
- (BOOL)resetConflictResolutionSections;
- (id)respondedSection;
- (id)sections;
- (id)selectedEndDate;
- (id)selectedStartDate;
- (void)setAddInviteesSection:(id)arg1;
- (void)setAllInviteesCanAttendSection:(id)arg1;
- (void)setAvailabilitySearcher:(id)arg1;
- (void)setDeletedParticipants:(BOOL)arg1;
- (void)setEvent:(id)arg1;
- (void)setFromDetail:(BOOL)arg1;
- (void)setInvisibleInviteeStatusSection:(id)arg1;
- (void)setInviteesView:(id)arg1;
- (void)setNotRespondedSection:(id)arg1;
- (void)setOriginalConflictSection:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setProposedTimeSection:(id)arg1;
- (void)setResetAttendeesSections:(BOOL)arg1;
- (void)setResetConflictResolutionSections:(BOOL)arg1;
- (void)setRespondedSection:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSelectedEndDate:(id)arg1;
- (void)setSelectedStartDate:(id)arg1;
- (void)setSomeInviteesCanAttendSection:(id)arg1;
- (void)setViewIsVisible:(BOOL)arg1;
- (id)someInviteesCanAttendSection;
- (unsigned int)supportedInterfaceOrientations;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateCustomBackButton;
- (BOOL)useCustomBackButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (BOOL)viewIsVisible;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
