# Why Model Software System

* Software development is complex
* Modelling can help build a system easily & quickly
* Useful in simulations
* Can evolve when our understand of the system increases
* We can choose the details in the model
* Simple view of the system
* No need to dig into the system for details
* A model can represent real or abstract things in any domain

# Model

A model is an abstraction of something that exists in real life

A model captures the view of a physical system. It is an abstraction of the physical system, with a certain purpose. This purpose determines what is to be included in the model and what is irrelevant. Thus, the model completely describes those aspects of the physical system that are relevant to the purpose of the model, at an appropriate level of details.

# Modelling Language

* Made up of pseudo-code, pictures, comments, diagrams, etc
* These elements make up to a modelling language
    - called notations
* Code may be used for modelling
    - too verbose i.e. information overload
    - only models implementation, not design
    - cannot be easily ported to other implementations
    - does not give a bigger picture of the system
    - clients may not understand code

# Modeling in Informal Languages

* Informal languages don't have formal notations
* For example, we may use natural language, but
    - difficult to express
    - leads to ambiguity
    - no rules
    - not suited for systems modelling
    - non-standard notations

# What is UML

* UML is the "Unified Modelling Language".
* Standard modelling language for software development
* Maintained by Object Management Group
* Current version is 2.5
* Brings together ideas of three modelling methods of Jacobson, Rumbaugh & Booch
* Made up to pseudo-code, actual code, pictures, diagrams, etc
* Describes the system we want to develop
* Depends mostly on notations to describe the system

# What UML is not

* It is not a modelling tool
    - It is just a way to model system
* It is not a programming language
* It is not a methodology or a process
    - Rather it helps document various stages of a process

# Why UML

* Systems design onlarge scale is difficult
* All kinds of applications will have thousands of components that interact with each other
    - components need to be tracked
    - usefulness of a component for a system has to be ascertained
    - customer requirements have to be considered
* Designs need to be shared with stakeholders
* UML helps model this kind of complexity
    - captures, documents and helps communicate important aspects of the system's design.

# UML Advantages

* Formal
* Concise
* Comprehensive
* Scalable
* Standard

# View Model

* Defines a coherent set of views that are used in construction of a software architecture.
* A view represents the whole system from the perpective of a related set of concerns
* This allows different stakeholders to view the system from their viewpoint
* The view model is an effective approach for dealing with the inherent complexity of the large distributed systems

# Intent 

* The intent is to use a mechanism that separates the differnent aspects of the software system into different views
* Different stakeholders have different interest in the system
    - programmers - classes
    - administrators - hardware, network configuration, etc
    - customers - usability

# View of the Model

* UML model diagrams can be broken into different perspectives or view
* Can be explained through Kruchten's 4+1 model
    - Logical View
    - Process View
    - Physical View
    - Development View
    - Use Case View

