package com.moppy.control.gui;

import com.moppy.control.GUIControlledPostProcessor;
import com.moppy.control.MoppyPreferences;
import com.moppy.control.NetworkManager;
import com.moppy.core.events.mapper.MapperCollection;
import com.moppy.core.midi.MoppyMIDIReceiverSender;
import com.moppy.core.midi.MoppyMIDISequencer;
import com.moppy.core.status.StatusBus;
import javax.sound.midi.MidiMessage;
import javax.swing.JSplitPane;

/**
 *
 */
public class MainWindow extends javax.swing.JFrame {

    private final StatusBus statusBus;
    private final MoppyMIDIReceiverSender receiverSender;
    private final MoppyMIDISequencer midiSequencer;
    private final NetworkManager netManager;
    private final MapperCollection<MidiMessage> mappers;
    private final GUIControlledPostProcessor postProc;


    /**
     * Creates new form MainWindow
     */
    public MainWindow(StatusBus statusBus, MoppyMIDIReceiverSender receiverSender, MoppyMIDISequencer midiSequencer, NetworkManager netManager, MapperCollection<MidiMessage> mappers, GUIControlledPostProcessor postProc) {
        this.statusBus = statusBus;
        this.receiverSender = receiverSender;
        this.midiSequencer = midiSequencer;
        this.netManager = netManager;
        this.mappers = mappers;
        this.postProc = postProc;

        initComponents();
    }

    /**
     * This method is called from within the constructor to initialize the form. WARNING: Do NOT modify this code. The content of this method is always regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jSplitPane1 = new javax.swing.JSplitPane();
        topPanel = new javax.swing.JPanel();
        sequencerPanel = new com.moppy.control.gui.SequencerPanel();
        sequencerPanel.setReceiverSender(receiverSender);
        sequencerPanel.setMidiSequencer(midiSequencer);
        sequencerPanel.setPostProcessor(postProc);
        statusBus.registerConsumer(sequencerPanel);
        networkPanel = new com.moppy.control.gui.netpanel.NetworkPanel();
        networkPanel.setNetworkManager(netManager);
        statusBus.registerConsumer(networkPanel);
        bottomPanel = new javax.swing.JScrollPane();
        mapperCollectionPanel = new com.moppy.control.gui.mapperpanel.MapperCollectionPanel();
        mapperCollectionPanel.initMapperCollectionPanel(mappers);
        statusBus.registerConsumer(mapperCollectionPanel);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setTitle("Moppy Control");
        setMinimumSize(new java.awt.Dimension(1024, 600));
        setPreferredSize(MoppyPreferences.getConfiguration().getMainWindowSize());
        setSize(MoppyPreferences.getConfiguration().getMainWindowSize());
        addComponentListener(new java.awt.event.ComponentAdapter() {
            public void componentResized(java.awt.event.ComponentEvent evt) {
                formComponentResized(evt);
            }
        });
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(java.awt.event.WindowEvent evt) {
                formWindowClosing(evt);
            }
        });

        jSplitPane1.setDividerLocation(MoppyPreferences.getConfiguration().getMainWindowDividerPosition());
        jSplitPane1.setOrientation(javax.swing.JSplitPane.VERTICAL_SPLIT);
        jSplitPane1.addPropertyChangeListener(new java.beans.PropertyChangeListener() {
            public void propertyChange(java.beans.PropertyChangeEvent evt) {
                jSplitPane1PropertyChange(evt);
            }
        });

        topPanel.setLayout(new javax.swing.BoxLayout(topPanel, javax.swing.BoxLayout.LINE_AXIS));

        sequencerPanel.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        sequencerPanel.setMinimumSize(new java.awt.Dimension(400, 230));
        topPanel.add(sequencerPanel);

        networkPanel.setBorder(javax.swing.BorderFactory.createEtchedBorder());
        topPanel.add(networkPanel);

        jSplitPane1.setTopComponent(topPanel);

        bottomPanel.setHorizontalScrollBarPolicy(javax.swing.ScrollPaneConstants.HORIZONTAL_SCROLLBAR_NEVER);
        bottomPanel.setVerticalScrollBarPolicy(javax.swing.ScrollPaneConstants.VERTICAL_SCROLLBAR_ALWAYS);
        bottomPanel.setMinimumSize(new java.awt.Dimension(23, 180));
        bottomPanel.setViewportView(mapperCollectionPanel);

        jSplitPane1.setBottomComponent(bottomPanel);

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jSplitPane1, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 1021, Short.MAX_VALUE)
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addComponent(jSplitPane1)
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void formWindowClosing(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowClosing
        // Save our mappers before closing
        mapperCollectionPanel.saveMappersToConfig();
    }//GEN-LAST:event_formWindowClosing

    private void formComponentResized(java.awt.event.ComponentEvent evt) {//GEN-FIRST:event_formComponentResized
        MoppyPreferences.getConfiguration().setMainWindowSize(this.getSize());
    }//GEN-LAST:event_formComponentResized

    private void jSplitPane1PropertyChange(java.beans.PropertyChangeEvent evt) {//GEN-FIRST:event_jSplitPane1PropertyChange
        if (evt.getPropertyName().equals(JSplitPane.DIVIDER_LOCATION_PROPERTY)) {
            MoppyPreferences.getConfiguration().setMainWindowDividerPosition(jSplitPane1.getDividerLocation());
        }
    }//GEN-LAST:event_jSplitPane1PropertyChange


    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JScrollPane bottomPanel;
    private javax.swing.JSplitPane jSplitPane1;
    private com.moppy.control.gui.mapperpanel.MapperCollectionPanel mapperCollectionPanel;
    private com.moppy.control.gui.netpanel.NetworkPanel networkPanel;
    private com.moppy.control.gui.SequencerPanel sequencerPanel;
    private javax.swing.JPanel topPanel;
    // End of variables declaration//GEN-END:variables
}
